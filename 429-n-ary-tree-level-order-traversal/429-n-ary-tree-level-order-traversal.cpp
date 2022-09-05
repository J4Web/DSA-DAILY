/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/
class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>> res;
        if(!root) return res;
        queue<Node*> q;
        q.push(root);
        while(q.size()!=0)
        {
             vector<int> level; 
            int n=q.size();
            for(int i=0;i<n;++i)
            {
                    Node* temp=q.front(); 
                    q.pop();
                    level.push_back(temp->val);
                for(auto nod:temp->children) q.push(nod);
            }
            res.push_back(level);
        }
        return res;
    }
};