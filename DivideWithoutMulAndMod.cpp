class Solution {
public:
    int divide(int u, int d) {
         if(u>=INT_MAX && d==1 || u<=INT_MIN && d<0 ) return INT_MAX;  
        if( u<=INT_MIN && d==1  || u == -1 && d <= INT_MIN ) return INT_MIN;
        int q=0;
        bool eneg=0;
        if(u<0 || d<0){
            eneg=1;
        }

        u=abs(u);
        d=abs(d);
        while(u>=0)
        {
            u=u-d;
            q++;
            
        }
        if(eneg) return -(q-1);
        return q-1;
    }
};