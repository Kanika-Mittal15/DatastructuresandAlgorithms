#include <bits/stdc++.h>
using namespace std;

class node
{
public: //it makes the data members accessible from the parent as well as in inherited child
    int data;
    node *next;
    node(int val)
    {
        data = val;
        next = NULL;
    }
};
node *top = NULL;
void push(int val)
{
    node *temp = new node(val);
    temp->data = val;
    temp->next = top;
    top = temp;
}
void pop()
{
    node *temp;
    if (top == NULL)
    {
        return;
    }
    temp = top;
    top = temp->next;
    delete (temp);
}
int main()
{
    push(2);
    pop();
}