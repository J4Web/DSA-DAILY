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
  int rootData; cout<<"Enter Root data\n";
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
      cout<<"Enter Left child of \n"<<front->data;
      int leftChild; cin>>leftChild;
      if(leftChild!=-1)
      {
        BinaryTreeNode<int>*leftNode= new BinaryTreeNode<int>(leftChild);
        front->left=leftNode;
        st.push(leftNode);
      }
      int rightChild;
      cout<<"Enter the Right child of "<<front->data<<"\n";
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
  return 0;
}