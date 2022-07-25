class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        if(!binary_search(nums.begin(),nums.end(),target))
        {
            ans.push_back(-1);
            ans.push_back(-1);
            return ans;
        }
        ans.push_back(lower_bound(nums.begin(),nums.end(),target)-nums.begin());
        ans.push_back(upper_bound(nums.begin(),nums.end(),target)-nums.begin()-1);
        return ans;
    }
};