#include<bits/stdc++.h>
#define int long long 
using namespace std;
void begin(){
	//Write your code here
    int n; cin>>n;
    cout<<n;
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


//Div4 817 B - LINE
#include <bits/stdc++.h>
#define int long long
using namespace std;
void begin()
{
  //start you code here
  int n; cin>>n;
  string s; cin>>s;
  int score=0;
  for(int i=0;i<n;++i)
  {
    if(s[i]=='L')
    {
      score+=i;
    }
    else{
      score+=(n-i-1);
    }
  }

  priority_queue<int> q;
  for(int i=0;i<n;++i)
  {
    if(s[i]=='L') q.push(((n-i-1)-i));

    else q.push(i-((n-i-1)));

  }


  for(int k=1;k<=n;++k)
  {
    int tp=q.top();
    q.pop();
    if(tp>0)
    {
      score+=tp;
    }
    cout<<score<<" ";
  }
  cout<<"\n";

  return;
}

int32_t main() {
  int t=1;
  cin>>t;
  while(t--)
  {
      begin();
  }

  
  return 0;
}
