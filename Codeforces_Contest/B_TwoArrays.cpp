    #include <bits/stdc++.h>
    #include<iostream>
    #define lli unsigned long long int
    #define forit(it, a) for(__typeof(a.begin()) it = a.begin(); it != a.end(); it++)
    #define pb push_back
    #define mp make_pair
    #define mod  1000000007
    using namespace std;
    int main()
    {
     
           int t;
           cin>>t;
           while(t--)
           {
               int n,x;
               cin>>n>>x;
               vector<int>v(n);
               for(int i=0;i<n;i++)
               {
                   cin>>v[i];
               }
                   int f=1;
               for(int i=0;i<n;i++)
               {
                   if(v[i]*2<x)
                   {
                       cout<<1;
                   }
                   if(v[i]*2>x)
                   {
                       cout<<0;
                   }
                   if(v[i]*2==x)
                   {
                       if(f)
                        cout<<1;
                       else
                        cout<<0;
                       f=1-f;
                   }
                   cout<<" ";
               }
               cout<<endl;
           }
           return 0;
    }
   
