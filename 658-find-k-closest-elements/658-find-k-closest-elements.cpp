class Solution {
public:
    vector<int> findClosestElements(vector<int>& A, int k, int x) {
         int N = A.size();
        int j = lower_bound(begin(A), end(A), x) - begin(A);
        int i = j - 1;
        
        while (j - i - 1 < k) {
            if (i == -1 || (j < N && abs(A[j] - x) < abs(A[i] - x))) j++;
            else i--;
        }
        
        return vector<int>(begin(A) + i + 1, begin(A) + j);

    }
};