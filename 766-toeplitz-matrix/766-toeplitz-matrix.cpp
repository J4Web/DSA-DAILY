class Solution {
public:
      static bool isToeplitzMatrix(const vector<vector<int>>& matrix) {
        const size_t rows = matrix.size();
        const size_t cols = matrix[0].size();
        for (size_t r = 1; r < rows; ++r)
            for (size_t c = 1; c < cols; ++c)
                if (matrix[r][c] != matrix[r - 1][c - 1]) return false;
        
        return true;
    }

};