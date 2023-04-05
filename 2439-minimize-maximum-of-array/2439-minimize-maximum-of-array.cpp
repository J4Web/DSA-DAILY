class Solution {
public:
    bool isValidNum(int x,vector<int>& nums)
    {
        long long sum=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i]; 
            if(sum>(long)x*(i+1)) return false;
        }
        return true;
    }
    int minimizeArrayValue(vector<int>& nums) {
        int left=0;
        int right=*max_element(begin(nums),end(nums));
        while(left<right)
        {
            int mid=(left+(right-left)/2);
            if(isValidNum(mid,nums)) right=mid;
            else left=mid+1;
                
        }
        return left;
        
    }
};