class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& arr) {
        int n=arr.size();
        int m=arr[0].size();
        vector<vector<int>> res(m,vector<int>(n,0)); //2d vector 
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                res[j][i]=arr[i][j];
            }
        }
        return res;
        
    }
};