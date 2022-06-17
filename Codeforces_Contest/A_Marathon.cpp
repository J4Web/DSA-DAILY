#include<bits/stdc++.h>
#define int long long 
using namespace std;
void begin(){
    //Write your code here
        int a,b,c,d; cin>>a>>b>>c>>d;
    int res=0;
    if(a<b) res++;
    if(a<c) res++;
    if(a<d) res++;
    cout<<res;
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

