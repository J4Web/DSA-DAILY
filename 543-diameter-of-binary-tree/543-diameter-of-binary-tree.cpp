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
    pair<int,int> helper(TreeNode* root)
    {
        if(root==nullptr) 
        {
            pair<int,int> p;
            p.first=0;
            p.second=0;
            return p;
        }
        pair<int,int> ld=helper(root->left);
        pair<int,int> rd=helper(root->right);
        int lh=ld.first;
        int dl=ld.second;    
        int rh=rd.first;
        int dr=rd.second;
        int height=max(lh,rh)+1;
        int diameter=max(lh+rh,max(dl,dr));
        pair<int,int> n;
        n.first=height;
        n.second=diameter;
        return n;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        
      return helper(root).second;
    }
};