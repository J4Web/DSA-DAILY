


#include    <bits/stdc++.h>
#define     e "\n"
#define     pb push_back
#define     em emplace_back
#define     int long long
#define     speed() ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define     loop(x,n) for(int x = 0; x < n; x++)
using namespace std;

void begin()
{

int n; cin>>n;
int a[n];
for(auto &i:a) cin>>i;
  unordered_map<int, int> index;
	int ans = 0,st=-1,en=-1;
	int p=INT_MAX;
	for (int i = 0, j = 0; i < n; i++) {

		// Update j based on previous
		// occurrence of a[i]
		j = max(index[a[i]], j);

		// Update ans to store maximum
		// length of subarray
      	if(i-j+1>=ans)
        {
          ans = i-j+1;
          en=i;
          st=j;
          int p1;
          p1=2 * min(n-en-1,st)+max(n-en-1,st);
          p = min(p,p1);
        }
	
		// Store the index of current
		// occurrence of a[i]
		index[a[i]] = i + 1;
	}
	
  cout<<p<<e;
  return;
}
    
int32_t main()
{
  speed()
  int t=1; 
   cin>>t; 
  while(t--)
  {
    begin();
    
  }
    return 0;
}
