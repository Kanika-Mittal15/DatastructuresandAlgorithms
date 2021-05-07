#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node *prev;
    node(int val)
    {
        data = val;
        next = NULL;
        prev = NULL;
    }
};
void insertathead(node *&head, int val)
{
    node *temp = new node(val);
    if (head == NULL)
    {
        head = temp;
        return;
    }
    head->prev = temp;
    temp->next = head;
    head = temp;
}
void reverse(node *head)
{
    node *temp = head;
    if (temp == NULL)
    {
        return;
    }
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    while (temp != NULL)
    {
        printf("%d", temp->data);
        
        temp = temp->prev;
    }
}

void print(node *head)
{
    node *temp = NULL;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
}
int main()
{
    node *head = NULL;
    insertathead(head, 1);
    insertathead(head, 2);
    insertathead(head, 3);
    print(head);
    reverse(head);
}