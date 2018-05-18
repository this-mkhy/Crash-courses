//Stack implementation by class,safe stack.
#include <iostream>
using namespace std;

class stack
{
    private:
        //Declare array in class
        enum{MAX=10};
        int st[MAX];

        int top;

    public:
        //Constructor
        stack()
        {
            top=-1;

        }

        //Check if stack is empty or have elements
        bool isEmpty()
        {
            if(top==-1)
                return true;

            return false;

        }

        //Check if stack is full or not
        bool isFull()
        {
            if(top>=MAX-1)  //MAX-1 = 9
                return true;

            return false;

        }

        void push(int var)
        {
            if (!isFull())
                st[++top]=var;
            else
                cout<<"Overflow, Stack is full."<<endl;

        }

        int pop()
        {
            if(!isEmpty())
                return st[top--];
            else
            {
                cout<<"Underflow, Stack is empty."<<endl;
                return -1;  //must be return ... -1 means stack is empty
       	    }

        }

};

int main()
{
    stack s1;
    s1.push(20);
    s1.push(50);
    s1.push(35);

    cout<<s1.pop()<<endl;   //35
    cout<<s1.pop()<<endl;   //50

    s1.push(60);
    cout<<s1.pop()<<endl;   //60
    cout<<s1.pop()<<endl;   //20

    //cout<<s1.pop()<<endl;   //called underflow
                              //But here pop not execute because stack is empty
                              //And will print Underflow, Stack is empty. and return -1

    return 0;

}