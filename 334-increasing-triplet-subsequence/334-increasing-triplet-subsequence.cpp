class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int FirstMinimumValue = INT_MAX, SecondMinimumValue = INT_MAX;
        if(nums.size()<3)   return false;
        for(int& num : nums){
            if(num <= FirstMinimumValue)  FirstMinimumValue = num;
            else if(num <= SecondMinimumValue)  SecondMinimumValue = num;
            else    return true;
        }
        return false;
    }
};