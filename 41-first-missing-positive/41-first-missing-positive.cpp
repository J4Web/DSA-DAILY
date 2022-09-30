class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        for(int i=0;i<nums.size();++i)
        {
            int val1=nums[i];
            while ((val1>=1 and val1<=nums.size()) and nums[val1-1]!=nums[i])
            {
                swap(nums[i],nums[val1-1]);
                val1=nums[i];
            }
            
        }
        // for(auto i:nums)
        // {
        //     cout<<i<<" ";
        // }
        for(int i=0;i<nums.size();++i)
        {
            if(i+1!=nums[i]){
                return i+1;
            }
        }
        return nums.size()+1;
    }
};