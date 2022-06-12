#include<bits/stdc++.h>
#define int long long 
using namespace std;
void begin(){
	//Write your code here
	    int n,k; cin>>n>>k;
    int sum=0;
    for(int i=0;i<n;i++)
    {
    	int x; cin>>x;
    	sum+=x;
    }
    cout<<max(sum-k,0ll);
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

