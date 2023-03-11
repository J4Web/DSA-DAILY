/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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
    TreeNode* getRootNodeOfBST(vector<int> &arr,int l,int r)
    {
        if(l>r) return nullptr;
        int mid=l+((r-l)/2);
        TreeNode* root=new TreeNode(arr[mid]);
        
        root->left=getRootNodeOfBST(arr,l,mid-1);
        root->right=getRootNodeOfBST(arr,mid+1,r);
        return root;
        
    }
    TreeNode* sortedListToBST(ListNode* head) {
        
        vector<int> arr;
        ListNode* temp=head;
        while(temp)
        {
            arr.push_back(temp->val);
            temp=temp->next;
        }
        int l=0;
        int r=arr.size()-1;
        return getRootNodeOfBST(arr,l,r);
        
    }
};