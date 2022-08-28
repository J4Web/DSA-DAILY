class Solution {
public:
    bool isPalindrome(string s)
    {
        int i=0;
        int j=s.size()-1;
        while(i<=j)
        {
            if(s[i]!=s[j]) return false;
            else{
                i++;
                j--;
            }
        }
        return true;
    }
    void solution(string s, vector<vector<string>> &res,vector<string> &asf)
    {
        if(s.size()==0){
            res.push_back(asf);
            return;
        }
        for(auto i=0;i<s.size();i++)
        {
            string prefix=s.substr(0,i+1);
            string ros=s.substr(i+1);
            if(isPalindrome(prefix)){
                asf.push_back(prefix);
                solution(ros,res,asf);
                asf.pop_back();
            } 
        }
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>> res;
        vector<string> asf;
        solution(s,res,asf);
        return res;
    }
};