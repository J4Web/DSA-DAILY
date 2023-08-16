/**
 * Definition for a binary tree node.
 * struct  TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
//tree updated code
//rest day to accumulate
//today was just a lazy day need a plan but have to have to do 2 questions
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        queue<TreeNode*> q;
        if(root==nullptr) return ans;
        q.push(root);
        while(q.size()!=0)
        {
            vector<int> temp;
            int n=q.size();
            for(int i=0;i<n;i++)
            {
                TreeNode* front=q.front();
                temp.push_back(front->val);
                q.pop();
                if(front->left) q.push(front->left);
                if(front->right) q.push(front->right);
            }
            ans.push_back(temp);
        }
        return ans;
        
    }
};
