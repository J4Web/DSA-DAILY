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
  BinaryTreeNode<int> *root=takeInputRecursiveWay();
  printMyTreeRecursively(root);
  return 0;
}