class Solution {
public:
    double myPow(double x, int n) {
        if(n==0) return (double)1;
        if(n==1) return x;
        if(n==-1) return 1/x;
        if(n%2==0) {
            double evenCase=myPow(x,n/2);
            return evenCase*evenCase;
        }
        double oddCase=myPow(x,n/2);
        return n<0? (1/x)*(oddCase*oddCase): (x)*(oddCase*oddCase);
        
    }
};