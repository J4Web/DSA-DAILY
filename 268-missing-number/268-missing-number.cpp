class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int expected_sum=((nums.size()*(nums.size()+1))/2);
        int sum=0;
        for(auto i:nums) sum+=i;
        return abs(sum-expected_sum);
    }
};