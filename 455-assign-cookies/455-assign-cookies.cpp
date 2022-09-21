class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(s.rbegin(),s.rend());
        sort(g.rbegin(),g.rend());
        int res=0;
        int i=s.size()-1;
        int j=g.size()-1;
        // cout<<i<<"\n";
        while(g.size()!=0 && s.size()!=0)
        {
            if(s[i]>=g[j])
            {
                ++res;
                g.pop_back();
                s.pop_back();
                i--;
                j--;
                
            }
            else{
                s.pop_back();
                i--;
            }
        }
        return res;
    }
};


