//Using 2 stacks

#include<iostream>
#include<stack>

using namespace std;

class myQueue
{
    private:
        stack<int> s1, s2;

    public:
       void enqueue(int element);
       int dequeue();
       void displayQueue();

       void DisplayFront();
};

// enqueue an element to the queue
void myQueue:: enqueue(int element)
{
   s1.push(element);

}

// dequeue the front element
int myQueue::dequeue()
{
    // transfer all elements of s1 into s2
    if(s1.empty() && s2.empty())
        return 0;

    //Convert from stack to queue using 2 stack
    //pop and store the top element in s2
    //while s1 have elements, push the top element from s1 to s2 and pop the first element
    while (!s1.empty())
    {
        s2.push(s1.top());
        s1.pop();
    }
    //Now s2 is stack but do the same role of queue

    //Now ew can dequeue the element from stack as it is queue
    int ret = s2.top();
    s2.pop();

    //transfer all elements of s2 back to s1
    //while s2 (queue) have elements
    while (!s2.empty())
    {
        s1.push(s2.top());
        s2.pop();
    }

   return ret;

}

//display all the elements of the queue
void myQueue::displayQueue()
{
    cout<<"\nDisplaying all the elements of the queue :-"<<endl;

    //convert stack to queue
    while (!s1.empty())
    {
        s2.push(s1.top());
        s1.pop();
    }

    //print queue
    while (!s2.empty())
    {
        cout<<s2.top()<<" ";
        s1.push(s2.top());
        s2.pop();
    }
}

void myQueue::DisplayFront()
{
    cout<<"\nDisplaying the front element of the queue :-"<<endl;

    //convert stack to queue
    while (!s1.empty())
    {
        s2.push(s1.top());
        s1.pop();
    }

    //print queue
    while (!s2.empty())
    {
        cout<<s2.top();
        return ;

    }

}


// main
int main()
{
    myQueue q;
    int exit=0;
    int t;
    cin >>t;

    int enqueue;
    int input;

    while(t--)
    {
        cin>>input;
        if(input ==1)
        {
            cin>>enqueue;
            q.enqueue(enqueue);
        }

        if(input ==2)
            q.dequeue();

        if(input ==3)
        {
            q.displayQueue();
            cout<<endl;
        }


        if(input ==4)
        {
            q.DisplayFront();
            cout<<endl;
        }
   }

   return 0;

}