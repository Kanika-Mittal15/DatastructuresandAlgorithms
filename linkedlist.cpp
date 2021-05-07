#include <iostream>
using namespace std;

//node structure
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
//inserting a node at the end or at the beginning
void insertAtTail(node *&head, int val)//we are modifying list therefore refrence is taken
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
//inserting a node at nth position
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

//deleting at nth node
void Del(node *&head, int n)
{
    node *temp1 = head;
    for (int i = 0; i < n - 2; i++)
    {
        temp1 = temp1->next;
    }
    node *temp2 = temp1->next;
    temp1->next = temp2->next;
    delete temp2;
}
//reversing a linked list
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
//reverse with recurrsion not list only printing the values of the list in reverse order

void reverserec(node *p)
{
    if (p == NULL)
    {
        return;
    }
    reverserec(p->next);
    cout << p->data << " ";
}
//printing linked list
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
    insert(head, 2, 8);
    Del(head, 3);
    display(head);
    head = reverse(head);
    display(head);
    reverserec(head);
    return 0;
}