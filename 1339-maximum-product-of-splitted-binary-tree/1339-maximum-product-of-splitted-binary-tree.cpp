/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
// class Solution {
// public:
//     int sumSubTree(TreeNode* root)
//     {
//         if(!root) return 0;
//         int left=sumSubTree(root->left);
//         int right = sumSubTree(root->right);
//         return left+right+root->val;
//     }
//     int maxProduct(TreeNode* root) {
//         if(!root) return 0;
//         //get left sum of the root
//         //get right sum of the root
//         //now add the root to the each left and right 
//         //and get max of root+left *right || root+right *left
//         int lsum=0;
//         lsum=sumSubTree(root->left);
//         int rsum=0;
//         rsum=sumSubTree(root->right);
        
//         int ans=max(   (lsum+root->val)*(rsum),(lsum)*(rsum+root->val));
//         return ans;
        
//     }
// };
class Solution {
public:
    int MOD = 1e9 + 7;
    long long treeSum = 0, result = 0, subTreeSum;
    
    int maxProduct(TreeNode* root) {
        treeSum = totalSumSubTree(root) , totalSumSubTree(root);
        return result % MOD;
    }
    int totalSumSubTree(TreeNode* root){
        if(!root) return 0;
        subTreeSum = totalSumSubTree(root->left) + totalSumSubTree(root->right) + root->val;
        result = max(result, subTreeSum * (treeSum - subTreeSum));
        return subTreeSum;

    } 
};