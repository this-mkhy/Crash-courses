#include <bits/stdc++.h>

using namespace std;

/*
if we have this tree
     1
    / \
   2   3
  / \
 4   5

Depth First Traversals:
(a) Inorder (Left, Root, Right) : 4 2 5 1 3
(b) Preorder (Root, Left, Right) : 1 2 4 5 3
(c) Postorder (Left, Right, Root) : 4 5 2 3 1

*/

struct node
{
    int data;
    struct node* left;
    struct node* right;

};

struct node* newNode(int data)
{
     struct node* node = (struct node*)malloc(sizeof(struct node));

     node->data = data;
     node->left = NULL;
     node->right = NULL;

     return(node);
}

//Print nodes in inorder
void printInOrderTraversal(struct node* node)
{
     if (node == NULL)
          return;

     //Check the left, recur on left child
     printInOrderTraversal(node->left);

     //then print the data of node
     cout<<node->data<<" ";

     //then check the right, recur on right child
     printInOrderTraversal(node->right);
}

//Print nodes in preorder
void printPreorderTraversal(struct node* node)
{
     if (node == NULL)
          return;

     //print data of node
     cout<<node->data<<" ";

     //then check the left, recur on left sutree
     printPreorderTraversal(node->left);

     //then check the right, recur on right subtree
     printPreorderTraversal(node->right);
}

//Print nodes in postorder traversal.
void printPostorderTraversal(struct node* node)
{
     if (node == NULL)
        return;

     // first check the left, recur on left sutree
     printPostorderTraversal(node->left);

     // then check the right,recur on right subtree
     printPostorderTraversal(node->right);

     //print data of node
     cout<<node->data<<" ";
}

int main()
{
     struct node *root  = newNode(1);
     root->left = newNode(2);
     root->right = newNode(3);
     root->left->left = newNode(4);
     root->left->right = newNode(5);

     cout<<endl;
     cout<<"Inorder traversal of binary tree is "<<endl;    //4 2 5 1 3
     printInOrderTraversal(root);

     cout<<endl;
     cout<<"Preorder traversal of binary tree is "<<endl;   //1 2 4 5 3
     printPreorderTraversal(root);

     cout<<endl;
     cout<<"Postorder traversal of binary tree is "<<endl;   //4 5 2 3 1
     printPostorderTraversal(root);

     return 0;
}

