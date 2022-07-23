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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(root==nullptr) return ans;
        queue<TreeNode*> q;
        int flag=1;
        q.push(root);
        while(q.size()!=0)
        {
            vector<int> v;
            int n=q.size();
            for(int i=0;i<n;i++)
            {  
                TreeNode* front=q.front();
                v.push_back(front->val);
                q.pop();
                if(front->left) q.push(front->left);
                if(front->right) q.push(front->right);
                
            }
            if(flag)
            {
                ans.push_back(v);
                flag=0;
            }
            else{
                reverse(v.begin(),v.end());
                ans.push_back(v);
                flag=1;
            }
            
        }
        return ans;
        
    }
};