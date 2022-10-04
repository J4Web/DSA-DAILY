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
    void helper(TreeNode* root, int t,bool &res)
    {
        if(!root) return;
        if(root and root->left==nullptr and root->right==nullptr and (t-root->val==0)  ) res=true;
            helper(root->left,t-root->val,res);
            helper(root->right,t-root->val,res);
            
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(!root) return false;
        bool res=false;
        helper(root,targetSum,res);
        return res;
    }
};