// #include<iostream>
// #define e endl
// #include<bits/stdc++.h>
// // #define m INT_MIN
// using namespace std;
// vector<string> print(string s)
// {
// 	if(s==""){
// 	  vector<string> ln;
// 	  ln.push_back("");
// 	  return ln;
// 	}
// 	char ch=s[0];
// 	vector<string> res=print(s.substr(1));
// 	vector<string> p;
// 	for(auto i:res)
// 	{
// 		p.push_back(i);
// 	}
// 	for(auto i:res)
// 	{
// 		p.push_back(ch+i);
// 	}
// 	// for(auto i:p) cout<<i<<" ";
// 	return p;
// }
// int main()
// {
// 	// int n; cin>>n;
// 	string s; 
// 	cin>>s;
// 	vector<string> sq=print(s);
// 	sort(sq.begin(),sq.end());
// 	for(auto i:sq){
// 		cout<<i<<" ";
// 	}
// 	// cout<<"====================="<<e;
// 	return 0;
// }


#include<iostream>
#define e endl
#include<bits/stdc++.h>
// #define m INT_MIN
using namespace std;
void code()
{
    /*Start your code here Sachin*/
    int n; cin>>n;
    vector<int> arr(n);
    for(auto &i:arr) cin>>i;
    int mn = INT_MIN;
    vector<int> brr(n);
    bool flag=0;
    for(int i=0;i<n;i++)
    {
    	int k; cin>>k;
    	if(k>arr[i]) 
    	{
    		flag=1;
    	}
    	mn = max(mn,arr[i]-k);
    	brr[i]=k;
    }
    if(flag==1)
    {
    	cout<<"NO\n";
    	return ;
    }
    for(int i=0;i<n;i++)
    {
    	arr[i]-=mn;
    	if(arr[i]<0) arr[i]=0;
    	// cout<<arr[i]<<" ";
    }
    for(int i=0;i<n;i++)
    {
    	if(arr[i]!=brr[i])
    	{
    		cout<<"NO\n";
    		return ;
    	}
    }
    cout<<"YES";
    cout<<"\n";
}
int main()
{
	int t=1;
	cin>>t;
	while(t--){
		code();
	}
	return 0;
}
