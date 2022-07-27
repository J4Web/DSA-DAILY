class Solution {
public:
    int fib(int n) {
        int dp[n+1];
        if(n==0 || n==1) return n;
            dp[n-1]=fib(n-1);
            dp[n-2]=fib(n-2);
        int ans=dp[n-1]+dp[n-2];
        
        return ans;
        
    }
};