#include <bits/stdc++.h>

using namespace std;
struct node
{
    int data;
    node *next;
}
*front = NULL,*tail = NULL,*Node = NULL,*newNode = NULL;

void enqueue(int x)
{
    newNode= new node;
    newNode->data = x;
    newNode->next = NULL;
    if(front == NULL)   //empty queue
    {
        front =tail=newNode;
        tail->next = NULL;
    }
    else            //not empty queue
    {
        tail->next =newNode;
        tail=newNode;
        tail->next = NULL;
    }
}
int dequeue()
{
    int x;
    if(front == NULL)
    {
        cout<<"empty queue"<<endl;
    }
    else
    {
        Node= front;
        x =Node->data;
        front = front->next;
        delete(Node);
        return(x);
    }
}

int main()
{
    int n,c = 0,x;
    cout<<"Enter the number of values to be pushed into queue"<<endl;
    cin>>n;

    while (c<n)
    {
        cout<<"Enter the value to be entered into queue"<<endl;
        cin>>x;
        enqueue(x);
        c++;
    }

    cout<<endl;
    cout<<"Removed Values are: "<<endl;
    while(true)
    {
        if (front != NULL)
            cout<<dequeue()<<endl;
        else
            break;
    }


}