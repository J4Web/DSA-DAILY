class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int a=nums[0];
        int b=nums[1];
        int d=nums[n-1];
        int e=nums[n-2];
        int f=nums[n-3];
        return max(a*b*d,f*e*d);
        
    }
};