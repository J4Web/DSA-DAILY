class Solution {
public:
    bool isValid(string s) {
       stack<char> st;
        for(auto i:s)
        {
            if(i=='(' || i=='[' || i=='{') st.push(i);
            else{
                if(st.size()==0) return false;
                else if(st.top()=='(' && i==')' ) st.pop();
                else if(st.top()=='{'  &&  i=='}') st.pop();
                else if(st.top()=='[' && i==']' ) st.pop();
                else return false;
            }
        }
        if(st.size()==0) return true;
        return false;
    }
};