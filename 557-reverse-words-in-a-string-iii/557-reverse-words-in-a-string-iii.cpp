class Solution {
public:
    string reverseWords(string s) {
        s.push_back(' ');
        stack<char> st;
        string res="";
        for(int i=0;i<s.size();++i)
        {
            if(s[i]!=' ')
            {
                st.push(s[i]);
            }
            else{
                while(st.size()!=0)
                {
                    res+=st.top();
                    st.pop();
                }
                res+=' ';
            }
        }
        res.pop_back();
        return res;
        
    }
};