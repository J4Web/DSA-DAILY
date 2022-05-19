#include<bits/stdc++.h>
#define e endl
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
TreeNode<int> *InputTaking()
{
  cout<<"Enter the root data : "<<e;
  int data; cin>>data;
  TreeNode<int> *root=new TreeNode<int>(data);
  int children;
  cout<<"Enter the number of children of "<<data<<e;
  cin>>children;
  for(int i=0;i<children;i++)
  {
    TreeNode<int> *child=InputTaking();
    root->children.push_back(child);
  }
  return root;

}
void printData(TreeNode<int> *root)
{
  if(root==nullptr) return;
  cout<<root->data<<":";
  for(int i=0;i<root->children.size();i++)
  {
    cout<<root->children[i]->data<<",";
  }
  cout<<e;
  for(int i=0;i<root->children.size();i++)
  {
    printData(root->children[i]);
  }

}

TreeNode<int> *LevelWiseInput()
{
  int rootData;
  cout<<"Enter the root data\n"<<endl;
   cin>>rootData;
   TreeNode<int> *root=new TreeNode<int>(rootData);
   queue<TreeNode<int>*> st;
   st.push(root);
   while(st.size()>0)
   {
    TreeNode<int> *front=st.front();
    st.pop();
    cout<<"Enter the number of children of "<<front->data<<e;
    int n; cin>>n;
    for(int i=0;i<n;i++)
    {
      int childData;
      cout<<"enter the "<<i<<"th of "<<front->data<<e;
      cin>>childData;
      TreeNode<int> *childNode=new TreeNode<int>(childData);
      front->children.push_back(childNode);
      st.push(childNode);
    }
   }
   return root;
}
void LevelWisePrinting(TreeNode<int>* root)
{
  queue<TreeNode<int>*> st;
  st.push(root);
  while(st.size()>0)
  {
    TreeNode<int>* front=st.front();
    st.pop();
    cout<<front->data<<":";
    for(int i=0;i<front->children.size();i++)
    {
      cout<<front->children[i]->data<<" , ";
      st.push(front->children[i]);
    }
    cout<<e;
  }
}
int ctNodes(TreeNode<int>* root)
{
  int ct=0;
  if(root==nullptr) return 0;
  for(int i=0;i<root->children.size();i++)
  {
    ct+=ctNodes(root->children[i]);
  }
  return ct+1;
}
int sumNodes(TreeNode<int>* root)
{
  int sum=0;
  if(root==nullptr) return 0;
  for(int i=0;i<root->children.size();i++)
  {
    sum+=sumNodes(root->children[i]);
  }
  return sum+root->data;
}
int largestNode(TreeNode<int>* root)
{
  int larData=root->data;
  for(int i=0;i<root->children.size();i++)
  {
    int data=largestNode(root->children[i]);
    if(data>larData)
    {
      larData=data;
    }
  }
  return larData;
}
int HeightTree(TreeNode<int> * root)
{
  int ht=0;
  for(int i=0;i<root->children.size();i++)
  {
    int htLevel=HeightTree(root->children[i]);
    if(htLevel>ht)
    {
      ht=htLevel;
    }
  }
  return ht+1;
}
int ctLeafNodes(TreeNode<int>* root)
{
  int ct=0;
  if(root->children.size()==0)
   {
    ct+=1;
    return ct;
   }

    for(int i=0;i<root->children.size();i++)
    {
      ct+=ctLeafNodes(root->children[i]);
    }
  return ct;

}
void PrintTheKthLevelDepth(TreeNode<int>* root,int k)
{
  if(k==0)
  {
    cout<<root->data<<e;
    return;
  }
  for(int i=0;i<root->children.size();i++)
  {
    PrintTheKthLevelDepth(root->children[i],k-1);
  }
}
int main()
{
  // TreeNode<int> *root=new TreeNode<int>(6);
  // TreeNode<int> *node1=new TreeNode<int>(-8);
  // TreeNode<int> *node2=new TreeNode<int>(67);
  // TreeNode<int> *node3=new TreeNode<int>(67);
  // TreeNode<int> *node4=new TreeNode<int>(56);
  // root->children.push_back(node1);
  // root->children.push_back(node2);
  // node1->children.push_back(node3);
  // node1->children.push_back(node4);
  TreeNode<int> *root=LevelWiseInput();
  LevelWisePrinting(root);
  cout<<"nodesss counttt"<<e;
  cout<<ctNodes(root)<<e;
  cout<<"Summ data"<<e;
  cout<<sumNodes(root)<<e;
  cout<<"Largest Data"<<e;
  cout<<largestNode(root)<<e;
  cout<<"Height of The Tree\n";
  cout<<HeightTree(root)<<e;
  cout<<"Print at the Depth of a Node \n"<<e;
  PrintTheKthLevelDepth(root,1);
  cout<<"Leave Nodessss"<<e;
  cout<<ctLeafNodes(root)<<e;
  return 0;
}

