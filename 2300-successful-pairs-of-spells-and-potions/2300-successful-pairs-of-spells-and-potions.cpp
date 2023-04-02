class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        
        sort(begin(potions),end(potions));
        vector<int> res;
        for(auto s:spells)
        {
            
            int l=0;
            int r=potions.size()-1;
            int idx=potions.size();
            while(l<=r)
            {
                int m=l+(r-l)/2;
                long long prod=(long long)(s)*potions[m];
                if((prod)>=success)
                {
                    r=m-1;
                    idx=m;
                }
                else l=m+1;
            }
            res.push_back(potions.size()-idx);
            
            
            
        }
        return res;
    }
};