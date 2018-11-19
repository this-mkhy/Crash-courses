#include <bits/stdc++.h>

using namespace std;

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node* newNode(int data)
{
    node *temp = new node;
    temp->data = data;
    temp->left = temp->right = NULL;
    return temp;
}

void printLevelTraversal(node *root)
{
    if (root==NULL)
        return;

    queue<node *> q;

    //Push Root
    q.push(root);

    while (q.empty()==false)
    {
        //Print the front of queue and remove it from the queue
        node *currNode = q.front();
        cout<<currNode->data<<" ";
        q.pop();

        //If this element have left child, Enqueue left child
        if (currNode->left!=NULL)
        {
            q.push(currNode->left);
        }

        //If this element have right child, Enqueue right child
        if (currNode->right!=NULL)
        {
            q.push(currNode->right);
        }
    }
}


int main()
{
    /*
        1
       / \
      2   3
     / \
    4   5

    //1 2 3 4 5
    */

    node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);

    cout<<"Breadth-first-Search (BFS): Level Order traversal of binary tree is "<<endl;
    printLevelTraversal(root);

    return 0;
}
