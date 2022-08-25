class Solution {
public:
    void genParents(int close,int open,vector<string>&res,string &st,int n)
    {
        if(close==open && open==n)
        {
            res.push_back(st);
            return;
        }
        if(open<n)
        {
            st.push_back('(');
            genParents(close,open+1,res,st,n);
            st.pop_back();
        }
        if(open>close)
        {
            st.push_back(')');
            genParents(close+1,open,res,st,n);
            st.pop_back();   
        }
        return;
        
    }
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        int close=0;
        int open=0;
        string st;
        genParents(close,open,res,st,n);
        return res;
    }
};
