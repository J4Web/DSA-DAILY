#include<bits/stdc++.h>
#define e endl
using namespace std;
template<typename T>
class BinaryTreeNode{
public: 
  T data;
  BinaryTreeNode<int>* left;
  BinaryTreeNode<int>* right;
  BinaryTreeNode(T data)
  {
    this->data=data;
    this->left=nullptr;
    this->right=nullptr;
  }

};
BinaryTreeNode<int>* takeInputRecursiveWay()
{
  int rootData; cout<<"Enter data\n";
  cin>>rootData;
  if(rootData==-1) return nullptr;
   BinaryTreeNode<int>*  root=new BinaryTreeNode<int>(rootData);
  BinaryTreeNode<int>* left=takeInputRecursiveWay();
  BinaryTreeNode<int>* right=takeInputRecursiveWay();
  root->left=left;
  root->right=right;
  return root;
}
void printMyTreeRecursively(BinaryTreeNode<int>* root)
{
  if(root==nullptr) return;
  cout<<root->data<<":";
  if(root->left)
  {
    cout<<"L "<<root->left->data<<" ";
  }
  if(root->right)
  {
    cout<<"R "<<root->right->data;
  }
  cout<<e;
  printMyTreeRecursively(root->left);
  printMyTreeRecursively(root->right);
  return;

}
BinaryTreeNode<int>* takeInputLevelWise()
{
  int rootData; cout<<"Enter Root data\n";
  cin>>rootData;
  if(rootData!=-1)
  {
    BinaryTreeNode<int> *root=new BinaryTreeNode<int>(rootData);
    queue<BinaryTreeNode<int>*> st;
    st.push(root);
    while(st.size()>0)
    {
      BinaryTreeNode<int> *front=st.front();
      st.pop();
      cout<<"Enter Left child of "<<front->data<<e;
      int leftChild; cin>>leftChild;
      if(leftChild!=-1)
      {
        BinaryTreeNode<int>*leftNode= new BinaryTreeNode<int>(leftChild);
        front->left=leftNode;
        st.push(leftNode);
      }
      int rightChild;
      cout<<"Enter the Right child\n";
      cin>>rightChild;
      if(rightChild!=-1)
      {
        BinaryTreeNode<int>* rightNode=new BinaryTreeNode<int>(rightChild);
        front->right=rightNode;
        st.push(rightNode);
      }

    }
    return root;
  }
  else return nullptr;

}

void levelWisePrintingBinaryTree(BinaryTreeNode<int>* root)
{
  queue<BinaryTreeNode<int>*> pendingNodes;
  pendingNodes.push(root);
  while(pendingNodes.size()>0)
  {
    BinaryTreeNode<int>* front=pendingNodes.front();
    pendingNodes.pop();
    cout<<front->data<<" : ";
    if(front->left)
    {
      cout<<"L "<<front->left->data;
      pendingNodes.push(front->left);
    }
    if(front->right)
    {
      cout<<"R "<<front->right->data<<e;
      pendingNodes.push(front->right);
    }
    cout<<e;
  }
}
int ctNodesInBinaryTree(BinaryTreeNode<int>* root)
{
  int ct=0;
  if(root==nullptr) return 0;
  ct+=ctNodesInBinaryTree(root->left);
  ct+=ctNodesInBinaryTree(root->right);
  return ct+1;

}
bool isNodePresent(BinaryTreeNode<int>* root,int x)
{
  if(root==nullptr) return false;
  bool ans;
  if(root->data==x)
  {
    ans=true;
    return ans;
  }
  bool left=isNodePresent(root->left,x);
  bool right=isNodePresent(root->right,x);
  return (left || right ||  ans);

}
int htOfBinaryTree(BinaryTreeNode<int>* root)
{
  int ht=0;
  if(root==nullptr) return 0;
  ht=max(htOfBinaryTree(root->left),htOfBinaryTree(root->right));
  return ht+1;

}
BinaryTreeNode<int>* mirrorBinaryTree(BinaryTreeNode<int>* root)
{
  stack<BinaryTreeNode<int>*> st;
  st.push(root);
  while(st.size()>0)
  {
    BinaryTreeNode<int>* front=st.top();
    st.pop();
    if(front->left) st.push(front->left);
    if(front->right) st.push(front->right);
    swap(front->left,front->right);
  }
  return root;

}
void preOrderTraversal(BinaryTreeNode<int>* root)
{
  if(root==nullptr) return;
  cout<<root->data<<" ";
  if(root->left)
  {
    preOrderTraversal(root->left);
  } 
  if(root->right)
  {
    preOrderTraversal(root->right);
  }
}

void inOrderTraversal(BinaryTreeNode<int>* root)
{
  if(root==nullptr) return;
  if(root->left) inOrderTraversal(root->left);
  cout<<root->data<<" ";
  if(root->right) inOrderTraversal(root->right);
}
void postOrderTraversal(BinaryTreeNode<int>* root)
{
  if(root==nullptr) return;
  if(root->left) inOrderTraversal(root->left);
  if(root->right) inOrderTraversal(root->right);
  cout<<root->data<<" ";
}

int main()
{
  // BinaryTreeNode<int> *root=new BinaryTreeNode<int>(89);
  // BinaryTreeNode<int>* node1=new BinaryTreeNode<int>(91);
  // BinaryTreeNode<int>* node2=new BinaryTreeNode<int>(67);
  // BinaryTreeNode<int>* node3=new BinaryTreeNode<int>(100087);
  // BinaryTreeNode<int>* node4=new BinaryTreeNode<int>(6562453);
  // root->left=node1;
  // root->right=node2;
  // node1->left=node3;
  // node2->right=node4;
  BinaryTreeNode<int> *root=takeInputLevelWise();
  printMyTreeRecursively(root);
  cout<<"Binary Tree Number of Nodes\n :";
  cout<<ctNodesInBinaryTree(root)<<e;
  cout<<"Check if a Node is isNodePresent\n";
  cout<<isNodePresent(root,90);
  cout<<"Height of the Binar Tree \n";
  cout<<htOfBinaryTree(root);
  // cout<<"Mirror The Binary Tree\n";
   // root=mirrorBinaryTree(root);
   // printMyTreeRecursively(root);
   cout<<"inOrderTraversal of Binary Tree \n";
   inOrderTraversal(root);
   cout<<"PreOrder Traversal"<<e;
   preOrderTraversal(root);
   cout<<"Post ORDER Traversal\n";
   postOrderTraversal(root);
  return 0;
}