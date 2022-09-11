class Solution {
public:
    void isHelper(vector<int> &nums,int target,int mid,int st,int en,int &res)
    {
        if(st>en) return;
        if(nums[mid]==target) res=mid;
        if(nums[mid]>target){
            en=mid-1;
            mid=st+(en-st)/2;
            isHelper(nums,target,mid,st,en,res);
        }
        else if(nums[mid]<target){
            st=mid+1;
            mid=st+(en-st)/2;
            isHelper(nums,target,mid,st,en,res);
        }
        

    }
    int search(vector<int>& nums, int target) {
        int mid=0;
        int st=0;
        int en=nums.size()-1;
        mid=st+(en-st)/2;
        int res=-1;
        isHelper(nums,target,mid,st,en,res);
        return res;
    }
};