class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int> st;
        if(s.size()!=t.size()) return false;
        for(auto i:s) st[i]++;
        map<char,int> st1;
        for(auto i:t) st1[i]++;
        
        for(auto i:s)
        {
            if(st[i]!=st1[i])
            { 
                return false;
                
            }
        }
        return true;
            
        
    }
};