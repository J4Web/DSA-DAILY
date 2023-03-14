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
    void helper(TreeNode* root,int &sum,string &pathStr)
    {
        if(!(root->left) and !(root->right) )
        {
            sum+=stoi(pathStr+to_string(root->val));
            return;
        }
        pathStr+=to_string(root->val);
        if(root->left) helper(root->left,sum,pathStr);
        if(root->right) helper(root->right,sum,pathStr);
        pathStr.pop_back();
    }
    int sumNumbers(TreeNode* root) {
        int sum=0;
        string pathStr="";
        helper(root,sum,pathStr);
            return sum;
    }
};