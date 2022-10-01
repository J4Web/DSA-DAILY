class Solution {
public:
   int dp[101];
    int rec(string s,int index)
    {
        if(index==s.length())
            return 1;
        if(s[index]=='0')
            return 0;
        int count=0;
        if(dp[index]!=-1)
            return dp[index];
        if(s[index]>='1' and s[index]<='26')   // checking for only one character
            count+=rec(s,index+1);
        if(index+2<=s.length())
        {
            string temp1=s.substr(index,2);   // checking for two character
            int temp=stoi(temp1);        
            // cout<<temp<<"\n";
            if(temp>=1 and temp<=26)
                count+=rec(s,index+2);
        }
        return dp[index]=count;
    }
    
    int numDecodings(string s) {
       memset(dp,-1,sizeof(dp));
        return rec(s,0);
    }
};