class Solution {
public:
    bool check(vector<int>& nums) {
        int idx=-1;
        for(int i=0;i<nums.size()-1;++i)
        {
            if(nums[i]<=nums[i+1])
            {
                continue;
            }
            else{
                idx=i+1;break;
            }
        }
        if(idx==-1 ) return true;
        cout<<"idx:"<<idx<<"\n";
        bool res1=true;
        for(int i=0;i<idx-1;++i)
        {
            if(nums[i]>nums[i+1])
            {
                cout<<"at ith we see : "<<i<<"\n";
                res1=false;
                break;
            }
        
        }   
        bool res2=true;
        for(int i=idx;i<nums.size()-1;++i)
        {
            if(nums[i]>nums[i+1]){
                res2=false;
                break;
            }
        }
        bool res3=true;
        if(nums[nums.size()-1]>nums[0]) res3=false;
        return (res1&&res2 && res3);
    }
};