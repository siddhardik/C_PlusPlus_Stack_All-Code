#include <iostream>
// #include<bits/stdc++.h>
using namespace std;

#define n 100

class stack
{ public:    
    int *arr; // The array can on string type char or any predefined data type
    int top;

//Above two data memebers should be public otherwise yiu have to do other function stack:: 
    // I mean scoppe resolution operator


    stack()
    { // Constructor
        arr = new int[n];
        top = -1;
    }

    void push(int x)
    {
        if (top == n - 1)
        {
            cout << "Stack OverFlow" << endl;
            return;
        }
        top++;
        arr[top] = x;
    }

    void pop()
    {
        if (top == -1)
        {
            cout << "No element to pop" << endl;
            return;
        }
        top--;
    }

    int Top()
    {
        if (top == -1)
        {
            cout << "No Element in the stack and we return -1 in new line" << endl;
            return -1;
        }
        return arr[top];
    }

    bool empty()
    {
        return top==-1;
    }
};

int main()
{
    stack st;
    cout << st.empty() << endl;
    st.push(1);
    st.push(2);
    st.push(3);
    cout << st.empty() << endl;
    cout<<st.Top()<<endl;
    st.pop();
    st.pop();
    st.pop();
    st.empty();
    cout<<st.Top()<<endl;

    return 0;
}