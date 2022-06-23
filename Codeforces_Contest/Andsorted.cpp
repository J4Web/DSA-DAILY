#include<bits/stdc++.h>
#define int long long 
using namespace std;
void begin(){
    //Write your code here
        int n; cin>>n;
    vector<int> arr(n);
    for(auto &i:arr) cin>>i;
    int k = (1ll<<30)-1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=i)
        {
            k = (k&arr[i]);
        }
    }
    cout<<k;
    cout<<"\n";
    return;
}
int32_t main()
{
    int t=1;
    cin>>t;
    while(t--)
    {
        begin();
    }
    return 0;
}

