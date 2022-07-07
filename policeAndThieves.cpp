class Solution{
    public:
    int catchThieves(char arr[], int n, int k) 
    {
        // Code here 
        
        vector<int> p,t;
        for(int i=0;i<n;i++)
        {
            if(arr[i]=='P') p.push_back(i);
            else t.push_back(i);
        }
        // for(auto i:p) cout<<i<<" ";
        // cout<<" \n";
        // for(auto i:t) cout<<i<<" ";
        // cout<<"\n";
        int i=0,j=0,ans=0;
        int s=p.size();
        int q=t.size();
        while(i<s && j<q)
        {
            if(abs(p[i]-t[j])<=k){
                i++;
                j++;
                ans++;
            }
            else if(p[i]>t[j]) j++;
            else  i++;
        }
        return ans;
    
    }
};
