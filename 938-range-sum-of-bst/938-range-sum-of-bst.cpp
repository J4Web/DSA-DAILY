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
    void getSum(TreeNode* root,int low,int high,int &sum)
    {
        if(root==nullptr) return;
        int v=root->val;
        if( (v-low)<0 and (v-high)>0 ) return ;
        if( (v-low)>=0 and (v-high)<=0 ) 
        {
            cout<<"its the ran node "<<v<<"\n";
            sum+=v;
        }
        
        getSum(root->left,low,high,sum);
        getSum(root->right,low,high,sum);
        

    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        int sum=0;
        if(!root) return sum;
        getSum(root,low,high,sum);
        return sum;

        
    }
};