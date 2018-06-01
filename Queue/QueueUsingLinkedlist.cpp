//QUEUE USING LINKED LIST

#include <bits/stdc++.h>
#include<conio.h>

using namespace std;

//Create a NODE
struct node
{
   int data;
   struct node *next;
};

//Create a class 
class myQueue
{
   struct node *front,*tail;

   public:
       // constructure
        myQueue()
        {
            front=tail=NULL;
        }

        //declaration
        void Enqueue(int x);     // to insert an element
        void Dequeue();     // to delete an element
        void Display();     // to show the stack
};

//Definition

//Enqueue
void myQueue::Enqueue(int x)
{
   int value;
   struct node *newNode;

   cout<<"Enter a number to enqueue in queue: ";
   cin>>value;

   newNode=new node;
   newNode->data=value;
   newNode->next=NULL;
   if(front==NULL)
      front=newNode;
   else
      tail->next=newNode;
   tail=newNode;
}

// Dequeue
void myQueue::Dequeue()
{
   if(front==NULL)
   {
      cout<<"Queue is empty"<<endl;
      return;
   }

   struct node *temp;
   temp=front;
   front=front->next;
   cout<<temp->data<<" removed from the queue "<<endl;
   delete temp;
}

// Show Queue
void myQueue::Display()
{
   struct node *ptr1=front;
   if(front==NULL)
   {
      cout<<"The Queue is empty!!";
      return;
   }

   cout<<endl;
   cout<<"The Queue is : "<<endl;
   cout<<"front->";
   while(ptr1!=NULL)
   {
      cout<<ptr1->data<<" ->";
      ptr1=ptr1->next;
   }
   cout<<"tail"<<endl;

}

// Main function
int main()
{
    myQueue q;

		//take care, we can ignore those numbers in function and make it as you want.
		//if you want to print the same output, ignore value variable fron enqueue method and only use x
		
    q.Enqueue(5);   //5
    q.Enqueue(6);   //5 6
    q.Enqueue(8);   //5 6 8
    q.Enqueue(10);  //5 6 8 10
    q.Display();    //5 6 8 10
    q.Dequeue();    //6 8 10
    q.Display();    //6 8 10
    q.Dequeue();    //8 10
    q.Display();    //8 10
    q.Enqueue(7);   //8 10 7
    q.Display();    //8 10 7

   return 0;

}