#include<bits/stdc++.h>
using namespace std;
template<typename T>

class TreeNode{
public:
    T data;
  vector<TreeNode<T>*> children; 
  TreeNode(T data)
  {
    this->data=data;
  }
};

//taking the input recursively 
//just ask the root data, ask for its no. of children then we call the takeInput function 
//and lets assume it gives us all the 1st subTree's root we just attach it to our root and
// then get 2nd subTree's node and attach it to our node and move to 3rd and so on... 
TreeNode<int>* takeInput() 
{
  int rootData; cin>>rootData;
  TreeNode<int> *root=new TreeNode<int>(rootData);
  // cout<<"enter the children\n";
  int n;
  cin>>n;
  for(int i=0;i<n;i++)
  {
    TreeNode<int> * child=takeInput();
    root->children.push_back(child);
  }
  return root;

}
//printing is just
//1) print the data immediately 2) then put a ":"  and 
//print all its children by looping thru till root->children.size() and the cout<<root->children[i]->data<<","
//then after printing all its children we give it a new line and move to next children
//just call on each children and call printTree on each children
void printTree(TreeNode<int>* root)
{
  if(root==NULL)
  {
    return;
  }
  cout<<root->data<<" : ";
  for(int i=0;i<root->children.size();i++)
  {
    cout<<root->children[i]->data<<",";
  }
  cout<<e;
  for(int i=0;i<root->children.size();i++)
  {
    printTree(root->children[i]);
  }
  return;
}

TreeNode<int>* takeInputLevelWise()
{
  int rootData;
  cout<<"enter the root Data"<<e;
   cin>>rootData;
   TreeNode<int> * root=new TreeNode(rootData);
   queue<TreeNode<int>*> st;
   st.push(root);
   while(st.size()>0)
   {
    TreeNode<int> *front=st.front();
    st.pop();
    int child;
    cout<<"Enter the num of children of"<<front->data<<e;
    cin>>child;
    for(int i=0;i<child;i++)
    {
      cout<<"enter the "<<i<<"th "<<"child of "<<front->data<<e;
      int childData; cin>>childData;
      TreeNode<int>* childNode=new TreeNode<int>(childData);
      front->children.push_back(childNode);
      st.push(childNode);

    }
   }
   return root;

}

int numNodes(TreeNode<int>* root)
{
  int ct=0;
  for(int i=0;i<root->children.size();i++)
  {
    ct+=numNodes(root->children[i]);
  }
  return ct+1;
}
int sumNodes(TreeNode<int>* root)
{
  int sum=0;
  for(int i=0;i<root->children.size();i++)
{
  sum+=sumNodes(root->children[i]);
}
return sum+root->data;
}
int maxDataInTree(TreeNode<int>* root)
{
  if(root==NULL){
    return 0;
  }
  int mx=root->data;
  for(int i=0;i<root->children.size();i++)
  {
    mx=max(maxDataInTree(root->children[i]),mx);
  }
  return mx;
}


int main()
{
  // TreeNode<int>* root =new TreeNode<int>(2);
  // TreeNode<int>* node1=new TreeNode<int>(3);
  // TreeNode<int>* node2=new TreeNode<int>(8); 
  // root->children.push_back(node1);
  // root->children.push_back(node2);
  // TreeNode<int> *root=takeInput();
  TreeNode<int> *root=takeInputLevelWise();
  printTree(root);
  cout<<"====================="<<e;
  cout<<numNodes(root)<<e;
  cout<<sumNodes(root)<<e;
  cout<<maxDataInTree(root)<<e;
  return 0;
}
