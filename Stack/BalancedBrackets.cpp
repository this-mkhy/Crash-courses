#include <bits/stdc++.h>

using namespace std;

bool isBalanced(string s) 
{
    vector<char> openingBracketsStack; 
    
    for(int i=0; i<s.size() ;++i) 
    {
        if(s[i]=='{' || s[i]=='[' || s[i]=='(') 
        {
            openingBracketsStack.push_back(s[i]);
        } 
        
        else 
        {
            // Pop the top of the stack and make sure the brackets match
            if(openingBracketsStack.size()==0)    //empty stack
            {
                return false;
            }

            char top=openingBracketsStack.back();
            openingBracketsStack.pop_back();
            if(top=='{' && s[i]!='}') 
            {
                return false;
            }
            if(top=='(' && s[i]!=')') 
            {
                return false;
            }
            if(top=='[' && s[i]!=']') 
            {
                return false;
            }
        }
    }

    if(openingBracketsStack.size()==0) 
    {
        return true;
    } 
    else 
    {
        return false;
    }
}

int main()
{
    int t;
    cin >> t;
    for(int a= 0; a<t; ++a)
    {
        string s;
        cin>>s;

        bool result = isBalanced(s);
        
        if(result)
            cout << "YES"<<endl;
        else 
            cout << "NO"<<endl;
    }
    return 0;
}