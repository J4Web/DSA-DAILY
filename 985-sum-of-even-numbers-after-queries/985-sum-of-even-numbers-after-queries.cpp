class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        int sum=0;
        vector<int> res;
        for(auto i:nums){
            if(i%2==0) sum+=i;
        }
        // cout<<sum<<"\n";
        for(auto i:queries)
        {
            int val=i[0];
            int idx=i[1];
            int prevValAtIdx=nums[idx];
            nums[idx]+=val;
            if((prevValAtIdx)%2!=0)
            {
                if((nums[idx])%2==0){
                sum+=nums[idx];
                res.push_back(sum);
                }
                else res.push_back(sum);
        
                
            }
            else{
                if((nums[idx])%2==0){
                 sum-=prevValAtIdx;
                sum+=nums[idx];
                res.push_back(sum);
                }
                else{
                    sum-=prevValAtIdx;
                    res.push_back(sum);

                }
            }
        }
    
        return res;
        
    }
};