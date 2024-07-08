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
int getSizes(Node *head)
{
    int count = 0;
    Node *tmp = head;
    while (tmp != NULL)
    {
        count++;
        tmp = tmp->next;
    }
    return count;
}
int main()
{
    Node *head1 = NULL;
    Node *tail1 = NULL;
    int v1;
    while (true)
    {
        cin >> v1;
        if (v1 == -1)
        {
            break;
        }
        insert_tail(head1, tail1, v1);
    }
    Node *head2 = NULL;
    Node *tail2 = NULL;
    int v2;
    while (true)
    {
        cin >> v2;
        if (v2 == -1)
        {
            break;
        }
        insert_tail(head2, tail2, v2);
    }
    if (getSizes(head1) == getSizes(head2))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}