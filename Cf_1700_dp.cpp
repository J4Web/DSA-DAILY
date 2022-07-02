#include<bits/stdc++.h>
#define int long long int
#define ld long double
#define all(c) c.begin(),c.end()
#define lb lower_bound
#define ub upper_bound
#define mp(a,b) make_pair(a,b)
#define pb(c) push_back(c)
#define mod 1000000007
 
using namespace std;
 
void code()
{

	int n,k; cin>>n>>k;
	int dp[100001]={0};
	for(int i=0;i<k;i++)
	{
		dp[i]=1;
	}
	for(int i=k;i<100001;i++)
	{
		dp[i]=(dp[i-1]+dp[i-k])%mod;
	}
	
	int pre[100002]={0};
	pre[0]=0;
	for(int i=0;i<100000;i++)
	{
		pre[i+1]=(pre[i]+dp[i+1])%mod;
	}
	// for(int i=0;i<10;i++) cout<<pre[i]<<" ";
	// cout<<"\n";
	for(int i=0;i<n;i++)
	{
		int a,b; cin>>a>>b;
		cout<<(((pre[b]-pre[a-1])+mod)%mod);
		cout<<"\n";
	}
    
}
 
int32_t main()
{
	int t=1;
	//is Single Test case?cin>>t;
    while(t--)
    {
        code();
    }
    return 0;
}