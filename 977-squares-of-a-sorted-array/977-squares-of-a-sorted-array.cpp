class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> res(nums.size());
        int i=0;
        int j=nums.size()-1;
        int idx=j;
        do{
            int val1=(nums[i]*nums[i]);
            int val2=(nums[j]*nums[j]);
             if(val1>val2)
            {
               res[idx]=val1;
                  i++;
            }
           else if(val1<=val2){
               res[idx]=val2;
               j--;
           }
            idx--;
        }while(i<=j);
 
        return res;
    }
};