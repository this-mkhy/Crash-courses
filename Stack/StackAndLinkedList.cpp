//Stack using linked list
#include<iostream>

using namespace std;

//Define node pointer
struct node
{
    int data;
    node* next;
};

//Head and tail pointers
node* head;
node* tail;

//Declare functions
int menu();
void push(node *& head, node *&tail, int data);
void pop(node *&head, node *& tail);
void top(node *& head);
bool isEmpty(node *& head);

int main()
{

    node* head;
    node* tail;

    head = NULL;
    tail = NULL;
    int choice;

    do {
        choice = menu();

        switch(choice) {
            case 1:
                int data;
                cout<<"Enter value to be stored in stack: ";
                cin>>data;
                push(head,tail,data);
                break;

            case 2:
                pop(head,tail);
                break;

            case 3:
                top(head);
                break;

            case 4:
                cout<<"Not implemented"<<endl;
                break;
            case 5:
                isEmpty(head);
                break;

            case -1:
                choice = -1;
                break;

            default:
                cout<<"Enter a valid choice!!"<<endl;
        }
    }
    while(choice != -1);

    return 0;
}

//Menu function
int menu() {
    int ch;
    cout<<"Choose stack operation:"<<endl;
    cout<<"\n1.Push\n2.Pop\n3.Top element\n4.Is Full\n5.Is Empty\n6.Exit"<<endl;
    cout<<"\nEnter your Choice:"<<endl;
    cin>>ch;

    return ch;
}

//Push in stack
void push(node *& head, node *&tail, int data) {
    if (head == NULL)
    {
        node* n= new node;

        n->data = data;
        n->next = NULL;

        head = n;
        tail = n;

    }
    else
    {
        node* n = new node;
        n->data = data;
        n->next = head;
        head = n;
    }
}

// Pop first in stack
void pop(node *&head, node *& tail)
{
    if (head == NULL)
    {
        cout<<"\nThe stack is empty."<<endl;

    }
    else if (head == tail)
    {
        // Case when there is only 1 element in the stack
        cout<<"The value was popped"<<head->data<<endl;
        delete head;
        head = NULL;
        tail = NULL;

    }
    else
    {
        node* n = new node;
        n = head;
        head = head->next;
        cout<<"The value was popped"<<n->data<<endl;
        delete n;
    }
}

//Show top-most element in stack
void top(node *& head)
{
    if (head == NULL)
    {
        cout<<"The stack is empty"<<endl;

    }
    else
    {
        cout<<"Top number is : "<<head->data<<endl;
    }
}

// Shows if the stack is empty
bool isEmpty(node *& head)
{
    if(head == NULL)
    {
        cout<<"The stack is empty"<<endl;
        return true;

    }
     else
    {
        cout<<"\nThe stack is not empty"<<endl;
        return false;
    }
}