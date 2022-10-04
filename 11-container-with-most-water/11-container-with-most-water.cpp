class Solution {
public:
    int maxArea(vector<int>& h) {
        int i=0;
        int j=h.size()-1;
        int res=-1;
        while(i<j)
        {
            int cur=min(h[i],h[j])*abs(i-j);
            res=max(cur,res);
            if(h[i]>h[j]) j--;
            else i++;  
        }
        return res;
    }
};