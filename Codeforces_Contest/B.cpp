// Problem: A. Beat The Odds
// Contest: Codeforces - CodeCraft-22 and Codeforces Round #795 (Div. 2)
// URL: https://codeforces.com/contest/1691/problem/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

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
  //Start your code here 
  map<int,int> st;
  int a[n];
  for(auto &i:a) cin>>i;
  for(auto i:a)
  {
    st[i]++;
  }
  int res[n];
  for(auto i:st)
  {
    if(i.second==1)
    {
      cout<<-1<<e;
      return;
    }
  }
  int diff=0;
  for(int i=0;i<n;i++)
  {
    if(a[i]!=a[i+1])
    {
      res[diff]=i+1;
      diff=i+1;
    }
    else{
      res[i+1]=i+1;
    }
  }
  for(auto i:res)
  {
    cout<<i<<" ";
  }
  cout<<e;
  
  
 
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