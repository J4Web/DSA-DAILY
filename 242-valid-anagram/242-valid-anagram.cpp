class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int> mp;
        if(s.size()!=t.size()) return false;
        for(auto i:s){
           mp[i]++; 
        }
        for(auto i:t)
        {
                mp[i]--;
                if(mp[i]==0)
                {
                    mp.erase(i);
                }
        }
        if(mp.size()==0) return true;
        return false;
    }
};
