    vector<int> dp(10000,0);
class Solution {
public:
    int fib(int n) {
        if(n==0 || n==1) return n;
        if(dp[n]>0) return dp[n];
        int ans=fib(n-1)+fib(n-2);
        dp[n]=ans;
        return ans;
    }
};