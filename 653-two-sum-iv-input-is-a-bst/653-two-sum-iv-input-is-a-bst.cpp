class Solution {
public:
    bool flag = false;
    void binarySearch(TreeNode* root, TreeNode* top, int x){ // Here top is the top of our tree, from which we'll initiate our binary search
        if(top==NULL) return;
		//Go right and left both if we are on the same node
		//This is important to avoid cases like 2+2=4 ie. choosing the same node twice to complete two sum.
        if(root==top){
            binarySearch(root, top->left, x);
            binarySearch(root, top->right, x);
        }
        else{
            if(top->val == x){
                flag = true;
                return;
            }
            if(top->val>x) binarySearch(root, top->left, x);
            if(top->val<x) binarySearch(root, top->right, x);
        }
        return;
    }
	
	//Traversing each node in Preorder
    void inOrder(TreeNode* root, TreeNode* top, int k){
        if(root==NULL || flag) return; //Stop traversing if we have found the element.
        binarySearch(root, top, k-root->val); // searching for the needed element
        inOrder(root->left, top, k);
        inOrder(root->right, top, k);
    }
    
    bool findTarget(TreeNode* root, int k) {
        inOrder(root, root, k);
        return flag;
    }
};