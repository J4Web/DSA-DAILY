class Solution {
public:
    void makeVec(int n,int k,int curr,int idx,int chkPrev,vector<int> &res)
    {
        if(idx==n-1)
        {
            res.push_back(curr);
                return;
        }
        int next=chkPrev+k;
        if(next<10)
        {
            makeVec(n,k,curr*10+next,idx+1,next,res);
        }
        next=chkPrev-k;
        if(k!=0 && next>=0)
        {
             makeVec(n,k,curr*10+next,idx+1,next,res);
            
        }
    }
    vector<int> numsSameConsecDiff(int n, int k) {
        vector<int> res;
        for(int i=1;i<=9;i++)
        {
            makeVec(n,k,i,0,i,res);
        }
        return res;
        
    }
};