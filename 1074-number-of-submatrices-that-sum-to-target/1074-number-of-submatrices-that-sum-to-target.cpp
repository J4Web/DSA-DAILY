class Solution {
public:
    int numSubmatrixSumTarget(vector<vector<int>>& matrix, int target) {
        
        int n = matrix.size(), m = matrix[0].size(), ans = 0;
        
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                
                vector<int>tmp(m, 0);
                for(int k=i; k<n; k++){
                    int s = 0;
                    for(int l=j; l<m; l++){
                        s += matrix[k][l];
                        tmp[l] += s;
                        if(tmp[l]==target)
                            ans++;
                    }
                }
                
            }
        }
        
        return ans;
    }
};