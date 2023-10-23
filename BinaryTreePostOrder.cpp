#include<iostream>
using namespace std;
struct Tree
{
public:
  int data;
  Tree *left = nullptr, *right = nullptr;
    Tree (int x)
  {
    data = x;
    left = nullptr;
    right = nullptr;
  }
};
void postorder_traversal (Tree * root)
{
  if (root == nullptr)
    return;
  // Visit Left subtree
  postorder_traversal (root->left);
  // Visit right subtree
  postorder_traversal (root->right);
  // Print the data
  cout << root->data << " "<<endl;
}

int main ()
{
  Tree *root = new Tree (15);
  root->left = new Tree (12);
  root->right = new Tree (54);
  root->left->left = new Tree (8);
  root->left->right = new Tree (13);
  root->left->left->left = new Tree (5);
  root->right->left = new Tree (18);
  postorder_traversal (root);
  return 0;
}
