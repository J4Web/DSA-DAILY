class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n=nums.size();
        vector<int> res;
           for(int i=0;i<n;++i)
        {
            int val1=nums[i];
            while ((val1<=nums.size()) and nums[val1-1]!=nums[i])
            {
                swap(nums[i],nums[val1-1]);
                val1=nums[i];
            }
        }
        for(auto i=0;i<n;i++)
        {
            if(i+1!=nums[i])
            {
                res.push_back(nums[i]);
                res.push_back(i+1);
            }
            
        }
        return res;

    }
};

