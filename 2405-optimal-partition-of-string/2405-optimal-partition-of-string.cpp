class Solution {
public:
    int partitionString(string s) {
        int res=0;
        set<char> ch;
        int j=0;
        while(j<s.size())
        {
            if(ch.find(s[j])!=ch.end())
            {
                ch.clear();
                res++;
            }
            ch.insert(s[j]);
            ++j;
            
        }
        return res+1;
        
    }
};