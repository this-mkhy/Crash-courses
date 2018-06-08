//Using Array

#include <iostream>

using namespace std;

// Constants
#define max 20

// Functions
int menu();

// Stack functions
void enqueue();
void dequeue();
int front();
bool isFull();
bool isEmpty();

// Variables
int queue[max];
int frontElement = 0;
int rearElement = 0;

int main()
{

    int choice;

    do
    {
        choice = menu();

        switch(choice)
        {
            case 1:
                enqueue();
                break;
            case 2:
                dequeue();
                break;
            case 3:
                front();
                break;
            case 4:
                isFull();
                break;
            case 5:
                isEmpty();
                break;
            case -1:
                choice = -1;
                break;

            default:
                cout<<"\nEnter a valid choice!!"<<endl;
        }
    }
    while(choice != -1);
}

int menu()
{
    int ch;

    cout<<"\nQueue using Array"<<endl;
    cout<<"\n1.Enqueue\n2.Dequeue\n3.Front element\n4.Is Full\n5.Is Empty\n6.Exit"<<endl;
    cout<<"\nEnter your Choice:"<<endl;
    cin>>ch;

    return ch;
}

void enqueue()
{
    if(rearElement == max)
    {
        cout<<"\nOverflow"<<endl;

    }
    else
    {
        int element;
        cout<<"\nEnter Element:"<<endl;
        cin>>element;
        cout<<"\nElement "<<element<<" has been pushed at : "<<rearElement<<endl;
        queue[rearElement] = element;
        rearElement++;
    }
}

void dequeue()
{
    if(rearElement == 0)
    {
        cout<<"Queue is empty."<<endl;

    }
    else
    {
        if(frontElement == rearElement) //empty queue or error
        {
            frontElement = 0;
            rearElement = 0;
        }

        cout<<"Dequeued element is "<<queue[frontElement]<<endl;
        frontElement ++;
    }
}

int front()
{
    cout<<"\nTop number is "<<queue[frontElement]<<endl;

    return queue[frontElement];
}

bool isFull()
{
    if(rearElement == max -1)
    {
        cout<<"true"<<endl;
        return true;

    }
    else
    {
        cout<<"false"<<endl;
        return false;
    }
}

bool isEmpty()
{
    if(rearElement == 0)
    {
        cout<<"true"<<endl;
        return true;

    }
    else
        {
        cout<<"false"<<endl;
        return false;
    }
}