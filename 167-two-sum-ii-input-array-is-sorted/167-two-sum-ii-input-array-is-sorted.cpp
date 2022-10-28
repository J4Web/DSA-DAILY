class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int l=0;
        int r=n-1;
        vector<int> res;
        for(;l<r;)
        {
            int sum=nums[l]+nums[r];
            if(sum==target)
            {
                res.push_back(l+1);
                res.push_back(r+1);
                break;
            }
            if(sum<target) l++;
            if(sum>target) r--;
        }
        return res;
    }
};