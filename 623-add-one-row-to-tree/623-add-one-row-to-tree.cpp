class Solution {
    
    void solve(TreeNode* root, int val, int depth){
        if(root == NULL){
            return;
        }
        depth = depth -1;
        if(depth==0){
            TreeNode* temp = root->left;
            TreeNode* flag = root->right;
            
            root->left = new TreeNode(val);
            root->right = new TreeNode(val);
            
            root->left->left = temp;
            root->right->right = flag;
            return;
        }
        
        if(root->left){
            solve(root->left, val, depth);
        }
        if(root->right){
            solve(root->right, val, depth);
        }
        
    }
    
public:
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        
        if(depth == 1){
            TreeNode* temp = new TreeNode(val);
            temp->left = root;
            return temp;
        }
        int curr = 1;
        depth = depth -1;
        solve(root, val, depth);
        return root;
    }
};