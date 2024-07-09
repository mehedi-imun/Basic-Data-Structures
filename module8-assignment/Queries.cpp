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
void insetHead(Node *&head, int v)
{
    Node *newNode = new Node(v);

    newNode->next = head;
    head = newNode;
}
void insertATail(Node *&head, int v)
{
    Node *newNode = new Node(v);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newNode;
};
void deleteIndex(Node *&head, int v)
{
    if (head == NULL)
        return;

    Node *tmp = head;
    if (v == 0)
    {
        head = tmp->next;
        delete tmp;
        return;
    }
    for (int i = 0; i < v - 1; i++)
    {
        if (tmp == NULL || tmp->next == NULL)
            return;
        tmp = tmp->next;
    }
    if (tmp->next == NULL)
        return;
    Node *isDelete = tmp->next;
    tmp->next = tmp->next->next;
    delete isDelete;
}
int main()

{

    Node *head = NULL;
    int q;
    cin >> q;
    while (q--)
    {
        int x, v;
        cin >> x >> v;
        if (x == 0)
        {
            insetHead(head, v);
        }
        else if (x == 1)
        {
            insertATail(head, v);
        }
        else if (x == 2)
        {
            deleteIndex(head, v);
        }
        printList(head);
    }

    return 0;
}