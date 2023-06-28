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
//symmetric tree
class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        if(!root) return false;
        return helper(root->left,root->right);
    }
    bool helper(TreeNode* lft,TreeNode* rgt)
    {
        if(!lft and !rgt) return true;
        if(!lft || !rgt) return false;
        if(lft->val!=rgt->val) return false;
        return helper(lft->left,rgt->right) and helper(lft->right,rgt->left);
    }
};

