//Program to count height of tree and size of tree
#include <bits/stdc++.h>

using namespace std;

//A binary tree node has data, pointer to left child and a pointer to right child
struct node
{
    int data;
    struct node* left;
    struct node* right;
};

//Compute the maxDepth of a tree
//the number of nodes along the longest path from the root node down to the farthest leaf node.
int maxDepth(struct node* node)
{
    if (node==NULL)
        return 0;
   //return max(maxDepth(node->left), maxDepth(node->right)) + 1; //the same

   else
   {
       //compute the depth of each subtree right and left
       int rDepth = maxDepth(node->right);
       int lDepth = maxDepth(node->left);

       //use the larger one
       if (lDepth > rDepth)
       {
           return(lDepth+1);
       }
       else
       {
            return(rDepth+1);
       }
   }
}

// Computes the number of nodes in a tree.
int treeSize(struct node* node)
{
    if (node==NULL)
        return 0;
    else
        return 1+(treeSize(node->left) + treeSize(node->right));
}


/* Helper function that allocates a new node with the
   given data and NULL left and right pointers. */
struct node* newNode(int data)
{
    //create new node using utility malloc function
    struct node* node = (struct node*) malloc(sizeof(struct node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;

    return(node);
}

int main()
{
    /*
        25
       / \
      15   50
     / \    /
    10  22  35

    */

    struct node *root = newNode(25);

    root->left = newNode(15);
    root->right = newNode(50);
    root->left->left = newNode(10);
    root->left->right = newNode(22);
    root->right->left = newNode(35);

    cout<<"Height of tree is "<<maxDepth(root);  //3
    cout<<endl;
    cout<<"Size of the tree is "<<treeSize(root);   //6

    return 0;
}
