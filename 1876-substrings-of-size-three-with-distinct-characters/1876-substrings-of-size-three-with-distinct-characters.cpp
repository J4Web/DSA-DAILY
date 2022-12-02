class Solution {
public:
    int countGoodSubstrings(string s) {
        //base condi
        if(s.size()<3) return 0;
        int i=0;
        int j=0;
        int n=s.size();
        unordered_map<char,int> mp;
        int ans=0;
        while(j<n)
        {
            mp[s[j]]++;
            if(j-i+1 <3)
            {
                j++;
            }
            else if(mp.size()==3)
            {
                ans++;
                mp.erase(s[i]);
                i++;
                j++;
            }
            else{
                mp[s[i]]--;
                if(mp[s[i]]==0)
                {
                    mp.erase(s[i]);
                }
                i++;
                j++;
            }
            
        }
        return ans;
        
    }
};