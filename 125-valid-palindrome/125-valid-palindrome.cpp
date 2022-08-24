class Solution {
public:
    bool isPalindrome(string s) {
        string res="";
        for(auto i:s)
        {
            if(i>=65 && i<=90)
            {
                res+=(char)(i+32);
            }
            else if((i>=48 && i<=57))
            {
                res+=i;
            }
            else if((i>=97 && i<=122))
            {
                res+=i;
            }
        }
        // cout<<res<<"\n";
        // string res2="";
        // for(auto i:res)
        // {
        //     res2=i+res2;
        // }
        // cout<<res2<<"\n";
        // if(res2==res) return true;
        int i=0;
        int j=res.size()-1;
        while(i<=j)
        {
            if(res[i]==res[j])
            {
                i++;
                j--;
            }
            else return false;
        }
        return true;
    }
};