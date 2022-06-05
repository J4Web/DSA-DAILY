#include<iostream>
#define e endl
// #define m INT_MIN
using namespace std;
int print(int *a,int i,int key)
{
	if(i==0){
		if(a[0]==key){
			return 0;
		}
		return -1;
	}
	int p=print(a,i-1,key);
	if(p==-1)
	{
		if(a[i]==key)
			return i;
		else return -1;
	}
	return p;

}
int main()
{
	// int n; cin>>n;
	int a[5]={2,5,11,6,89};
	cout<<print(a,4,89);
	return 0;
}