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
int getDifference(Node *head)
{
    Node *tmp = head;
    int max = INT_MIN;
    int min = INT_MAX;
    while (tmp != NULL)
    {
        if (tmp->value > max)
        {
            max = tmp->value;
        }
        if (tmp->value < min)
        {
            min = tmp->value;
        }
        tmp = tmp->next;
    }
    return max - min;
}
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
    // printList(head);
    int def = getDifference(head);
    cout << def << endl;
    return 0;
}