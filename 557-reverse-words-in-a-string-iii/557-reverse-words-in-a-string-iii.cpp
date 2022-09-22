class Solution {
public:
    string reverseWords(string s) {
        string res="";
        string temp="";
         s.push_back(' ');
        for(int i=0;i<s.size();++i)
        {
           
            if(s[i]==' ')
            {
                res+=" ";
            }
            if(s[i]!=' ')
            {
                temp=s[i]+temp;
            }

            else{
                res+=temp;
                temp="";
            }
            
        }
        
        return res.substr(1,res.size());
    }
};