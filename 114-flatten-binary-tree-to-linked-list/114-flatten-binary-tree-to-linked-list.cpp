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
    void flatten(TreeNode* root) {
        if(!root) return;
        TreeNode* tempLeft=root->left;
        TreeNode *tempRight=root->right;
        root->left=nullptr;
        flatten(tempLeft);
        flatten(tempRight);
        root->right=tempLeft;
        TreeNode* curr=root;
        while(curr->right) curr=curr->right;
        curr->right=tempRight;
    }
};