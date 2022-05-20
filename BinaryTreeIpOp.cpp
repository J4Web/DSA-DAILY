//Binary Tree
#include<bits/stdc++.h>
#define e endl
using namespace std;
template<typename T>
class BinaryTree{
public:
  T data;
  BinaryTree *Left;
  BinaryTree *Right;
  BinaryTree(T data)
  {
    this->data=data;
    Left=NULL;
    Right=NULL;
  }

};
//Going to the atmost left
void printRecursive(BinaryTree<int> *root)
{
  if(root==NULL) return;
  cout<<root->data<<":";
  if(root->Left)
  {
    cout<<"L"<<root->Left->data;
  }
  if(root->Right)
  {
    cout<<"R"<<root->Right->data;
  }
  cout<<e;
  printRecursive(root->Left);
  printRecursive(root->Right);
  return;
}
//Going to the atmost left until returned null then we go right then its left and THEN its right if found null then we return or we continue to left and right
BinaryTree<int>* TakeInput()
{
  int rootData; cout<<"Enter rootData\n";
  cin>>rootData;
  if(rootData==-1) return NULL;
  BinaryTree<int>* root=new BinaryTree<int>(rootData);
  BinaryTree<int>* Left=TakeInput();
  BinaryTree<int>* Right=TakeInput();
  root->Left=Left;
  root->Right=Right;
  return root;
}
int main()
{
  // BinaryTree<int>* root=new BinaryTree<int>(6);
  // BinaryTree<int>* node1=new BinaryTree<int>(67);
  // BinaryTree<int>* node2=new BinaryTree<int>(89);
  // root->Left=node1;
  // root->Right=node2;
  BinaryTree<int>* root=TakeInput();
  printRecursive(root);
  return 0;
}