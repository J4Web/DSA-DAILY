#include<bits/stdc++.h>
#define int long long 
using namespace std;
void begin(){
	int n; cin>>n;
	//Write your code here
	int a,b,c,x,y;
	cin>>a>>b>>c>>x>>y;
	int leftd=0;
	int leftc=0;
	a-=x;
	bool flag=false;
	b-=y;
	if(a<0)
	{
		c-=abs(a);
		if(c<0)
		{
			cout<<"NO\n";
			return;
		}
	}
	else if(b<0)
	{
		c-=abs(b);
		if(c<0)
		{
			cout<<"NO\n";
			return;
		}
	}
	if(c>0 || c==0)
	{
		cout<<"YES\n";
		return;
	}
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

