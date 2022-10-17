/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 //idk
 * };
 */
class Solution {
public:
    int maxDepth(TreeNode* root) {
        int depth=0;
        queue<TreeNode*> q;
        if(root==nullptr) return depth;
        q.push(root);
        while(q.size()!=0)
        {
            depth++;
            int n=q.size();
            for(int i=0;i<n;i++)
            {
                TreeNode* front=q.front();
                q.pop();
                if(front->left) q.push(front->left);
                if(front->right) q.push(front->right);
            }
        }
        return depth;
        
    }
};
