#include<bits/stdc++.h>
#define int long long int
#define ld long double
#define all(c) c.begin(),c.end()
#define lb lower_bound
#define ub upper_bound
#define mp(a,b) make_pair(a,b)
#define NITRO ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
 
int fn(vector<int>& A, int N, int K)
{
 
    int i = 0, j = 0, sum = 0;
    int maxLen = INT_MIN;
   
    while (j < N) {
        sum += A[j];
        if (sum < K) {
            j++;
        }
        else if (sum == K) {
            maxLen = max(maxLen, j-i+1);
            j++;
        }
        else if (sum > K) {
            while (sum > K) {
                sum -= A[i];
                 i++;
            }
              if(sum == K){
              maxLen = max(maxLen, j-i+1);
            }
            j++;
        }
    }
    return maxLen;
}
 
void code()
{
    int n,k; cin>>n>>k;
    vector<int> arr(n);
    for(auto &i:arr) cin>>i;
    int len = fn(arr,n,k);
    if(len==INT_MIN) cout<<-1;
    else cout<<n-len;
    cout<<"\n";
}
 
int32_t main()
{
    int t=1;
    cin>>t;
    while(t--)
    {
        code();
    }
    return 0;
}
