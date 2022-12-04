class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        vector<long long> arr;
        int n=nums.size();
        long long sum=0;
        int midx=-1;
        long long mele=INT_MAX;

        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
            arr.push_back(sum);
        } 

        
        for(auto i=0;i<n;i++)
        {
            long long frac=abs(((arr[i])/(i+1))-((sum-arr[i])/max(n-i-1,1)));
       
            if(frac<mele)
            {
                mele=frac;
                midx=i;
            }
        }
       return midx;
    }
};


