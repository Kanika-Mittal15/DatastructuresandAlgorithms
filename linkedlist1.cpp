#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node(int val)
    {
        data = val;
        next = NULL;
    }
};

void insertAtTail(node *&head, int val)
{
    node *n = new node(val);
    if (head == NULL)
    {
        head = n;
        return;
    }
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}
void insert(node *&head, int n, int val)
{
    node *temp1 = new node(n);
    temp1->data = val;
    temp1->next = NULL;
    if (n == 1)
    {
        temp1->next = head;
        head = temp1;
    }
    node *temp2 = head;
    for (int i = 0; i < n - 2; i++)
    {
        temp2 = temp2->next;
    }
    temp1->next = temp2->next;
    temp2->next = temp1;
}
void del(node *&head, int n)
{
    node *temp1 = head;
    for (int i = 0; i < n - 2; i++)
    {
        temp1 = temp1->next;
    }
    node *temp2 = temp1->next;
    temp1->next = temp2->next;
    delete (temp2);
}
node *reverse(node *&head)
{
    node *current, *prev, *next;
    current = head;
    prev = NULL;
    while (current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev;
    return head;
}
void reverserec(node *p)
{
    if (p == NULL)
    {
        return;
    }
    reverserec(p->next);
    cout << p->data << "->";
}
struct node *head;
void rev(struct node *p)
{
    if (p->next == NULL)
    {
        head = p;
        return;
    }
    rev(p->next);
    struct node *q = p->next;
    q->next = p;
    p->next = NULL;
}
void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "null" << endl;
}
int main()
{
    node *head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    display(head);
    insert(head, 2, 4);
    display(head);
    del(head, 2);
    display(head);
    head = reverse(head);
    display(head);
    reverserec(head);
    display(head);
    rev(head);

    display(head);
}