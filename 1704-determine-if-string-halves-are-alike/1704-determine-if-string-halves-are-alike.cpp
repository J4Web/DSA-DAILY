class Solution {
public:
    int countVowels(string &s1)
    {
        int ans=0;
        for(auto i:s1)
        {
            if(i=='a' ||  i=='e' || i=='i' || i=='o' || i=='u' || i=='A' || i=='E' || i=='I' || i=='O' || i=='U') ans++;
            
        }
        return ans;
    }
    bool halvesAreAlike(string s) {
        int n=s.size();
        string str1=s.substr(0,n/2);
        string str2=s.substr(n/2,n);
        int ct1=countVowels(str1);
        int ct2=countVowels(str2);
        if(ct1==ct2) return true;
        
        return false;
    }
};