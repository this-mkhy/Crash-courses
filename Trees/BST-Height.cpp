//Full program to count height of any BST

#include <iostream>
#include <cstddef>

using namespace std;

class Node
{
    public:
        //The tree node has data, left child and right child
        int data;
        Node *left;
        Node *right;

        //Constructor
        Node(int d)
        {
            data = d;
            left = NULL;
            right = NULL;
        }
};

class tree
{
    public:
        Node* insert(Node* root, int data)
  		{
            if(root == NULL)
            {
                //This is dynamic memory allocation. You should later delete allocated memory (like this => delete node; if you don't want memory leak.
                return new Node(data);
            }
            else
            {
                Node* cur;

                //if data less than the parent, pus it in the left of tree
                if(data <= root->data)
                {
                    cur = insert(root->left, data);
                    root->left = cur;
                }

                //if data bigger than the parent, pus it in the right of tree
                else
                {
                    cur = insert(root->right, data);
                    root->right = cur;
                }

               return root;
           }
        }

        //the root node of a binary tree, which is a pointer to the root node of a binary tree.
        int height(Node* root)
        {
            if (root==NULL)
            {
                return -1;

            }

            //the same
            return max(height(root->left), height(root->right)) + 1;

            //Or , the same as above
            /*
            else
            {
                //compute the depth of each subtree right and left
                int rDepth = height(root->right);
                int lDepth = height(root->left);

                //use the larger one
                if (lDepth > rDepth)
                    return(lDepth+1);
               else
                    return(rDepth+1);
            }
            */

        }

};

int main()
{
    /*
    -A binary search tree is a binary tree in which the value of each parent node's left child is less than the value the parent node,
        and the value of the parent node is less than the value of its right child.

    7
    3 2 1 5 4 6 7

        3
       / \
      2   5
     /   / \
    1   4   6
             \
              7

    */

    tree myTree;
    Node* root = NULL;
    int t;               //number of nodes
    int data;

    cout<<"The number of nodes in tree : "<<endl;
    cin >>t;

    cout<<"Fill the binary tree : "<<endl;
    while(t-->0)
    {
        cin >> data;
        root = myTree.insert(root, data);
    }

    int height = myTree.height(root);
    cout<<"The height of the binary tree : "<<endl;
    cout<<height;

    return 0;
}
