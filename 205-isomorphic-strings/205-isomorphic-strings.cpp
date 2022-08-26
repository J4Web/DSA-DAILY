class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size()!=t.size()) return false;
        map<char,char> mp1;
        map<char,bool> mp2;
        for(auto i=0;i<s.size();++i)
        {
            char s1=s[i];
            char s2=t[i];
            if(mp1.find(s1)!=mp1.end() && mp1[s1]!=s2){
                return false;
            }
            else if(mp1.find(s1)==mp1.end() && mp2.find(s2)!=mp2.end() && mp2[s2]==true){
               return false;
            }
            else if(mp1.find(s1)==mp1.end() && mp2.find(s2)==mp2.end() ){
                mp1[s1]=s2;
                mp2[s2]=true;
            }
            
        }
        return true;

        
    }
};