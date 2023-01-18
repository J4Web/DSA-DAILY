//Better solution
//bug of mdebikri
//asdfghjk
//fustrting day
//slacking off
//resigning day
//recent solution
//exam day1
//slacking off
//slacking off
//Slacking off
//last exam night
//slacking off
//slacking off
//slacking off
//slacking off
//slacking off
//slacking off
//slacking off
//slacking off
//slacking off
//slacking off
//slacking off
//random cmt
//slacking off
//slacking off
//rest day
//slacking off
//work
//slacking off
//off day
//exam day
//exam day

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector<int> res;
        int l=0;
        vector<pair<int,int>> arr;
        for(auto i=0;i<n;i++)
        {
            arr.push_back({nums[i],i});
        }
         sort(arr.begin(),arr.end());
        int r=n-1;
        for(;l<r;)
        {
            int sum=arr[l].first+arr[r].first;
            if(sum==target)
            {
                res.push_back(arr[l].second);
                res.push_back(arr[r].second);
                l++;
                r--;
                break;
            }
            if(sum>target) r--;
                
            if(sum<target) l++;
        }
        return res;
        
    }
};
