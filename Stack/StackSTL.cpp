#include <iostream>
#include <stack>

using namespace std;

void printStack(stack <int> myStack)
{
    stack <int> s= myStack;
    while (!s.empty())
    {
        cout<< s.top()<<endl;
        s.pop();
    }
    cout <<endl;
}

int main ()
{
    stack <int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    cout << "The stack st is : "<<endl;
    printStack(st);

    cout << "the stack size : " << st.size()<<endl;
    cout << "the stack top : " << st.top()<<endl;


    cout << "After pop element : "<<endl;
    st.pop();    
    printStack(st);

    return 0;
}