
#include<bits/stdc++.h>
#define int long long
using namespace std;

void begin()
{
	int n; cin>>n;
	// cout<<n<<"\n";
	int f=3;
	int s=0;
	int l=0;
	int mn=INT_MAX;
	for(int i=3;i<=n;i+=1)
	{
		if((n-i)%2==0)
		{
			int mid= (n-i)/2;
			if(i<mn && mid-1>0 && i>mid+1){
				mn=i;
				f=i;
			s=mid+1;
			l=mid-1;
		}
		else{
			int mid= (n-i)/2;
			if(i<mn && i>mid+1){
				mn=i;
				f=i;
			s=mid+1;
			l=mid;

		}
	}
}
}
	cout<<s<<" "<<f<<" "<<l<<" ";
	cout<<"\n";
	return;
}
int32_t main()
{
	int t=1;
	cin>>t;
	while(t--){
		begin();
	}
	return 0;

}