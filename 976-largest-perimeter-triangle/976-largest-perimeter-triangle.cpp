class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        sort(nums.rbegin(),nums.rend());
        for(int i=0;i<nums.size()-2;++i)
        {
            int a=nums[i];
            int b=nums[i+1];
            int c=nums[i+2];
            if(c+b>a)
            {
                return a+b+c;
            }
        }
      return 0;
    }
};