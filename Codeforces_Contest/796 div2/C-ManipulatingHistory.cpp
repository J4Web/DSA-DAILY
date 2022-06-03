
#include    <bits/stdc++.h>
#define     e "\n"
#define     pb push_back
#define     em emplace_back
#define     int long long
#define     speed() ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define     loop(x,n) for(int x = 0; x < n; x++)
using namespace std;


void code()
{

    int a[26]={0};
    int n; cin>>n;
    for(int i=0;i<2*n;i++)
    {
      string s; cin>>s;
      for(auto j:s)
        a[j-'a']++;
    }
    string s; cin>>s;
    for(auto i:s) a[i-'a']++;
    for(int i=0;i<26;i++) if(a[i]%2==1) cout<<(char)('a'+i);
    cout<<"\n";
}
 
int32_t main()
{
  speed()
 
  int t=1;
  cin>>t;
    while(t--)
    {
        code();
    }
    return 0;
}