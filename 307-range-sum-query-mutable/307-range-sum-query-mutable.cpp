class NumArray {
public:
    
    int n;
    int stree[120004];
    
    // Build int segmented Tree stree[0] contains total sum 
    // stree[1] conatin sum of range 0 to mid and stree[1] conatian sum of range mid+1 to n
    void build(int i,int s,int e,vector<int>&nums)
    {
        if(s == e)
        {
            stree[i] = nums[e];
            return ;
        }
        
        int mid = s+(e-s)/2;
        build(2*i+1,s,mid,nums);
        build(2*i+2,mid+1,e,nums);
        
        stree[i] = stree[2*i+1] + stree[2*i+2];
    }
    
    // Updating value at particular index and updating stree accordingly
    void treeupdate(int i ,int st, int end,int ind, int val)
    {
        if(st == end)
        {
            stree[i] = val;
            return;
        }
        int mid = st+(end-st)/2;
        if(ind<=mid)
            treeupdate(2*i+1,st,mid,ind,val);
        else
            treeupdate(2*i+2,mid+1,end,ind,val);
        
        stree[i] = stree[i*2+1]+stree[i*2+2];
    }
    
    // Return sum of range left to Right 
    int rangeSum(int i,int st,int end,int left,int right)
    {
        if(left <= st && right>=end)
            return stree[i];
        
        if(left>end || right<st)
            return 0;
        
        int mid  = st + (end-st)/2;
        return rangeSum(2*i+1,st,mid,left,right) + rangeSum(2*i+2,mid+1,end,left,right);
    }
    
    
    NumArray(vector<int>& nums) {
        n = nums.size();
        build(0,0,n-1,nums);
    }
    
    void update(int index, int val) {
        treeupdate(0,0,n-1,index,val);
    }
    
    int sumRange(int left, int right) {
        int sum = rangeSum(0,0,n-1,left,right);
        return sum;
    }
};