class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        int i=0;
        if(s.size()==1) return false;
        while(i<s.size())
        {
            if(s[i]=='(' || s[i]=='{' || s[i]=='[')
            {
                st.push(s[i]);
                ++i;
            }
            else{
                if(st.size()==0)
                {
                    return false;
                }
                if(s[i]==')' && st.top()=='(')
                {
                    st.pop();
                    ++i;
                }
                else if(s[i]=='}' && st.top()=='{')
                {
                    st.pop();
                    ++i;
                }
                else if(s[i]==']' && st.top()=='[')
                {
                     st.pop();
                    ++i;
                }
                else {
                    return false;
                }
            }
        }
        if(st.size()==0)
        {
            return true;
        }
        return false;
    }
};