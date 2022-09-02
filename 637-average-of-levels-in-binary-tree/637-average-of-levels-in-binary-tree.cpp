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
    vector<double> averageOfLevels(TreeNode* root) {
        deque<TreeNode*> st;
        st.push_front(root);
        vector<double> res;
        int nodes=0;
        double sum=0.0000;
        
        st.push_front(NULL);
        // cout<<st.size()<<"\n";
        while(true)
        {   
            TreeNode* temp=st.back();
            if(temp) 
            {
                nodes++;
                sum+=temp->val;
            }
            st.pop_back();
            
            if(temp==nullptr)
            {
               
                res.push_back(sum/nodes); 
                nodes=0;
                sum=0.0000;
                
                if(st.size()==0) 
                {
                    cout<<"ewrftghjk";
                    break;
                }
                 st.push_front(NULL);
            }
             if(temp && temp->left) 
            {
                 cout<<"asdfghj"<<"\n";
                st.push_front(temp->left);
            }
            if(temp && temp->right)
            {
                cout<<"right"<<"\n";
                st.push_front(temp->right); 
    
            }
            
        }
        return res;
    }
};