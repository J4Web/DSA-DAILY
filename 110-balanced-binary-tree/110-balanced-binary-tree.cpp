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
class Solution {
public:
    int ht(TreeNode* root)
    {
        if(root==nullptr) return 0;
        int lh=ht(root->left);
        int rh=ht(root->right);
        return max(lh,rh)+1;
        
    }
    bool isBalanced(TreeNode* root) {
        if(root==nullptr) return true;
        if(root && !(root->left) && !(root->right)) return true;
        int lh=ht(root->left);
        int rh=ht(root->right);
        if(abs(lh-rh)>1) return false;
        return isBalanced(root->left) && isBalanced(root->right);
    }
};