#include<bits/stdc++.h>
#define int long long 
using namespace std;
void begin()
{
    //Start your code here
    int n; cin>>n;
    unordered_map<int,int> even,odd;
    int xr = 0;
    int res=0;
    for(int i=0;i<n;i++)
    {
        int k; cin>>k;
        xr=xr^k;
        if(i%2==0)
        {
            even[xr^k]++;
            res+=odd[xr];
        }
        else
        {
            odd[xr^k]++;
            res+=even[xr];
        }
    }
    cout<<res;
    cout<<"\n";
}
int32_t main()
{
    int t=1;
    // cin>>t;
    while(t--)
    {
        begin();
    }
    return 0;
}

