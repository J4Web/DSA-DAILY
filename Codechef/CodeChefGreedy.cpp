//RamDev Codechef
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
  int lr,br; cin>>lr>>br;
  int n; cin>>n;
  int ans=0;
 while(n)
  {
    int a,b; cin>>a>>b;
    // cout<<a<<" "<< b<<e;
    ans+=max((a/lr)*(b/br),(a/br)*(b/lr));
    n--;
  }
  cout<<ans<<"\n"; 
 
}
    
int32_t main()
{
  speed()
  int t=1; 
   //cin>>t; 
  while(t--)
  {
    begin();
    
  }
    return 0;
}

//SellAllCars 
#include <bits/stdc++.h>
#define mod 1000000007
#define int long long
using namespace std;
bool cmp(int &i1, int &i2)
{
    return i1>i2;
}

int32_t main() {
  // your code goes here
  int t=1;
  cin>>t;
  while(t--)
  {
      int n; cin>>n;
      vector<int> st(n);
      for(auto &i:st) cin>>i;
      int ans=0;
      sort(st.begin(),st.end(),cmp);
      for(auto i=0;i<n;i++)
      {
          ans+=max(st[i]-i,(int)0);
          ans%=mod;
      }
      cout<<ans<<" \n";   
  }
  return 0;
}


//Activity Selection

#include<bits/stdc++.h>
#define int long long
#define e endl
using namespace std;
bool cmp(vector<int> &i1, vector<int> &i2)
{
  return i1[1]<=i2[1];
}

int32_t main()
{
  vector<vector<int>> v={{1,3},{2,6},{4,5}};
  sort(v.begin(),v.end(),cmp);
  // for(auto i:v)
  // {
  //   cout<<i[0]<<" : "<<i[1]<<"\n";
  // }
  int ct=0;
  int freeAt=0;
  for(int i=0;i<3;i++)
  {
    if(freeAt<=v[i][0])
    {
      ct++;
      freeAt=v[i][1];

    }
  }
  cout<<ct<<"\n";
  return 0;
}