#include<bits/stdc++.h>
#define int long long int
#define ld long double
#define all(c) c.begin(),c.end()
#define lb lower_bound
#define ub upper_bound
#define mp(a,b) make_pair(a,b)
#define pb(c) push_back(c)
#define mod 1000000007
#define NITRO ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
using namespace std;
 
string fn(string s, int x)
{
	int minute = stoll(s.substr(3,2));
	int hr = stoll(s.substr(0,2));
	int hr1 = x/60;
	x=x%60;
	hr+=hr1;
	hr=hr%24;
	minute+=x;
	int c = minute/60;
	hr+=c;
	minute=minute%60;
	if(hr==24) hr=0;
	string res="";
	if(hr<10) res+="0";
	res+=to_string(hr);
	res+=':';
	if(minute<10) res+="0";
	res+=to_string(minute);
	// cout<<res<<"\n";
	return res; 
}
 
void code()
{
    string s; cin>>s;
    int x; cin>>x;
    unordered_map<string,int> mp;
    int count=0;
    while(mp[s]<=1)
    {
    	s = fn(s,x);
    	mp[s]++;
    	bool flag=0;
    	for(int i=0,j=s.size()-1;i<j;i++,j--)
    	{
    		if(s[i]!=s[j])
    		{
    			flag=1;
    			break;
    		}
     	}
     	if(flag==0 && mp[s]==1) count++;
    }
    cout<<count;
    cout<<"\n";
}
 
int32_t main()
{

 
	NITRO
	int t=1;
	cin>>t;
    while(t--)
    {
        code();
    }
    return 0;
}


//Div 4 A 


#include<bits/stdc++.h>
#define int long long int
#define ld long double
#define all(c) c.begin(),c.end()
#define lb lower_bound
#define ub upper_bound
#define mp(a,b) make_pair(a,b)
#define pb(c) push_back(c)
#define mod 1000000007
#define NITRO ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using namespace std;

void code()
{

      int len; cin>>len;
    string name="Timur";
  sort(name.begin(),name.end());
    string s; cin>>s;
    sort(s.begin(),s.end());
  if(name.size()!=s.size()){
    cout<<"NO"<<"\n";
    return;
  }
    for(auto i=0;i<name.size();i++)
      {
        if(name[i]!=s[i]){
          cout<<"NO"<<"\n";
          return;
        }
        
      }
    cout<<"YES"<<"\n";
  return;
  
}

int32_t main()
{


  NITRO
  int t=1;
  cin>>t;
    while(t--)
    {
        code();
    }
    return 0;
}

//DIV 4 CP CONTEST


#include<bits/stdc++.h>
#define int long long int
#define ld long double
#define all(c) c.begin(),c.end()
#define lb lower_bound
#define ub upper_bound
#define mp(a,b) make_pair(a,b)
#define pb(c) push_back(c)
#define mod 1000000007
#define NITRO ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using namespace std;

void code()
{

      int len; cin>>len;
    string name="Timur";
  sort(name.begin(),name.end());
    string s; cin>>s;
    sort(s.begin(),s.end());
  if(name.size()!=s.size()){
    cout<<"NO"<<"\n";
    return;
  }
    for(auto i=0;i<name.size();i++)
      {
        if(name[i]!=s[i]){
          cout<<"NO"<<"\n";
          return;
        }
        
      }
    cout<<"YES"<<"\n";
  return;
  
}

int32_t main()
{


  NITRO
  int t=1;
  cin>>t;
    while(t--)
    {
        code();
    }
    return 0;
}
