class Solution {
public:
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        //If 1st node is null we return the 2nd tree as it is
        if(!root1) return root2;
        //if the 2nd tree is null we return the 1st tree as it is
        if(!root2) return root1;
        //we create a root node with root1's data + root2's data
        TreeNode* root = new TreeNode(root1->val+root2->val);
        //then we call recursion to the left side and connect the left subtree to our root node's left node
        root->left=mergeTrees(root1->left,root2->left);
        //then we call recusrion to the right side and connect the right subtree to our root node's right
        root->right=mergeTrees(root1->right,root2->right);
        //the we simply return our root node
        return root;
        
    }
};