class Solution {
public:
    long long mod = 1000000007;
 long long helper(int n,int k,int t,vector<vector<long long>> &dp)
    {
        if(t<0) return 0;
        if(n==0 and t!=0) return 0;
        if(n!=0 and t==0) return 0;
        if(n==0 and t==0) return 1;
        if(dp[n][t]!=-1) return dp[n][t];
        long long res=0;
        for(long long i=1;i<=k;++i)
        {
            res+=helper(n-1,k,t-i,dp)%mod;
        }
       return dp[n][t]=res%mod;

    }
    int numRollsToTarget(int n, int k, int target) {
        //2d dp question
        vector<vector<long long>> dp(n+1,vector<long long>(target+1,-1));
        int res=helper(n,k,target,dp);
        return res;
    }
};