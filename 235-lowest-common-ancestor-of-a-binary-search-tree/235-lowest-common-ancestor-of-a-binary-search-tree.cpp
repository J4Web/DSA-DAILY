/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* helper(TreeNode* root,TreeNode* p, TreeNode* q)
    {
        if(!root || root==p ||  root==q) return root;
        TreeNode* left=helper(root->left,p,q);
        TreeNode* right=helper(root->right,p,q);
        if(left && right) return root;
        if(left) return left;
        if(right) return right;
        return NULL;
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        return helper(root,p,q);
    }
};