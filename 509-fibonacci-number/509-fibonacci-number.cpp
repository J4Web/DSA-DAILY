class Solution {
public:
    int fib(int n) {
        if(n==0 || n==1) return n;
        int cur=0,prev1=0,prev2=0;
        prev1=1;
        prev2=0;
        for(int i=2;i<=n;i++)
        {
            cur=prev1+prev2;
            prev2=prev1;
            prev1=cur;
        }
        return cur;
    }
};