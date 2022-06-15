    // Problem: G. 2^Sort
    // Contest: Codeforces - Codeforces Round #799 (Div. 4)
    // URL: https://codeforces.com/contest/1692/problem/G
    // Memory Limit: 256 MB
    // Time Limit: 1000 ms
     
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
        /*Start your code here*/
        int n,k; cin>>n>>k;
        vector<int> arr(n);
        for(auto &i:arr) cin>>i;
        k++;
        int i=-1,j=-1;
        int res=0;
        while(true)
        {
            bool f1=true,f2=true;
            while(i<n-1)
            {
                i++;
                f1=false;
                if(i>0 && 2*arr[i] <= arr[i-1])
                {
                    j=i-1;
                }
                if(i-j==k)
                {
                    res++;
                    break;
                }
            }
            while(j<i)
            {
                j++;
                break;
            }
            if(f1&&f2) break;
        }
        cout<<res;
        cout<<"\n";
    }
     
    int32_t main()
    {
        /*freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);*/
     
        NITRO
        int t=1;
        cin>>t;
        while(t--)
        {
            code();
        }
        return 0;
    }