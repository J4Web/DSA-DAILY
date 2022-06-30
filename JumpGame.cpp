class Solution {
public:
    int jump(vector<int>& nums) {
        int n=nums.size();
        int res=0;
        int l=0,r=0;
        while(r<n-1)
        {
            int farthest=0;
            for(auto i=l;i<r+1;i++) farthest=max(farthest,i+nums[i]);
            l=r+1;
            r=farthest;
            res+=1;
        }
        return res;
        
        
    }
};
