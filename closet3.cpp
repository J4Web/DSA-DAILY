#include<bits/stdc++.h>
class Solution{
    public:
    int closest3Sum(int a[], int n, int X)
    {
        // code here
        int min_diff=INT_MAX;
        int abs=0,ans=0;
        sort(a,a+n);
        for(int i=0;i<n-2;i++)
        {
            int j=i+1;
            int k=n-1;
            while(j<k)
            {
                int sum=a[i]+a[j]+a[k];
                if(sum==X) return sum;
                else if(sum>X) k--;
                else j++;
                int s=0;
                if(sum-X<0) s=-(sum-X);
                else s=sum-X;
                if(s<min_diff)
                {
                    min_diff=s;
                    ans=sum;
                }
            }
        }
        return ans;
    }
};