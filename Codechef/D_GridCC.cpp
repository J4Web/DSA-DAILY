#include<bits/stdc++.h>
#define int long long
using namespace std;
void begin()
{
	//start your code here 
	int n,m; cin>>n>>m;
	if(m==1 && n==1)
	{
		cout<<1<<"\n";
		return;
	}
	int total_tiles=n*m;
	int wouldHaveBeenSquareCells=n*n;
	int leftCells=(total_tiles-wouldHaveBeenSquareCells);
	cout<<leftCells<<"\n";
	int doesItdivide=(leftCells%4);
	// cout<<doesItdivide<<"\n";
	// cout<<m-n<<"\n";

	if(doesItdivide==0 && (m-n)%2==0)
	{
		cout<<0<<"\n";
		return;
	}
	else{
		int left=(m-n)%2;
		if(left==0)
		{
			cout<<0<<"\n";
			return;
		}
		else{
		int moretwos=leftCells/4;
		cout<<(leftCells-moretwos)<<"\n";
		return;
	}
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
