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

void find_maximum_value(Node *head)
{
    int max = INT_MIN;
    for (Node *i = head; i != NULL; i = i->next)
    {
        if (i->value > max)
        {
            max = i->value;
        }
    }
    cout << max << endl;
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

    find_maximum_value(head1);
    // printList(head1);

    return 0;
}