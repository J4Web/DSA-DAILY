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
    void getELem(TreeNode* root,vector<int> &res){
        if(!root) return;
        getELem(root->left,res);
        res.push_back(root->val);
        getELem(root->right,res);
        
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> res;
        getELem(root,res);
        return res;
    }
};