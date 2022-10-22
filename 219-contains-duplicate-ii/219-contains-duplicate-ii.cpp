class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        map<int,int> mp;
        int n=nums.size();
        for(int i=0;i<n;++i)
        {
            if(mp.find(nums[i])==mp.end())
            {
                mp.insert({nums[i],i});
            }
            else if( mp.find(nums[i])!=mp.end() and abs(i-mp[nums[i]])<=k ){
                return true;
            }
            else{
                mp[nums[i]]=i;
            }
            
        }
        return false;
    }
};