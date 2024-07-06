#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *next;
    Node(int value)
    {
        this->value = value;
        this->next = NULL;
    }
};
void insert_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    tail = newNode;
}
void printList(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->value << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
void sortList(Node *head)
{
    for (Node *i = head; i < i->next != NULL; i = i->next)
    {
        for (Node *j = i->next; j->next != NULL; j = j->next)
        {
            if (i->value > j->value)
            {
                swap(i->value, j->value);
            }
        }
    }
};
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int v;
    while (true)
    {
        cin >> v;
        if (v == -1)
        {
            break;
        }
        insert_tail(head, tail, v);
    }
    printList(head);
    sortList(head);
    printList(head);
    return 0;
}