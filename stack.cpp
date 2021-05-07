#include <bits/stdc++.h>
using namespace std;

#define n 101

class Stack
{
    int *arr;
    int top;

public:
    Stack()
    {
        arr = new int[n];
        top = -1;
    }
    void Push(int x)
    {
        if (top == n - 1)
        {
            cout << "OVERFLOW" << endl;
            return;
        }
        arr[++top] = x;
    }
    void Pop()
    {
        if (top == -1)
        {
            cout << "underflow" << endl;
            return;
        }
        top--;
    }
    int Top()
    {
        if (top == -1)
        {
            cout << "-1";
        }
        cout << arr[top];
    }
    int isempty()
    {
        if (top == -1)
            cout << "1";
        cout << "0";
    }
    void print()
    {
        for (int i = 0; i <= top; i++)
        {
            cout << arr[i];
        }
    }
};

int main()
{
    Stack S;
    S.Push(2);
    S.Push(3);
    S.Push(4);
    S.print();
    S.Pop();
    S.print();
    S.Top();
    S.print();
    S.isempty();
    S.print();
}