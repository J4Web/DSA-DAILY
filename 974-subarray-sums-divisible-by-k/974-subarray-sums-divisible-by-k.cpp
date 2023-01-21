class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        
        unordered_map<int,int> modFreq;
        modFreq[0]=1;
        int sum=0,res=0;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
            
            int mod=(sum%k+k)%k;
            if(modFreq.count(mod))
            {
                res+=modFreq[mod];
                
            }
            modFreq[mod]++;
        }
        return res;
    }
};