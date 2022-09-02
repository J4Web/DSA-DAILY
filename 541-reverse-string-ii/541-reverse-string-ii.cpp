class Solution {
public:
    string reverseStr(string s, int k) {
        
        int st=0;
        int en=min(k,(int)s.size());
        while(st<s.size())
        {
            reverse(s.begin()+st,s.begin()+en);
            st+=2*k;
            en=min(st+k,(int)s.size());
        }
        return s;
    }
};