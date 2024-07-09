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
void search_index(Node *head, int x)
{
    Node *tmp = head;
    int index = 0;
    while (tmp != NULL)
    {
        if (tmp->value == x)
        {
            cout << index << endl;
            return;
        }
        index++;
        tmp = tmp->next;
    }
    cout << -1 << endl;
}

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        Node *head = NULL;
        Node *tail = NULL;
        int v;
        int x;
        while (true)
        {
            cin >> v;
            if (v == -1)
            {
                break;
            }
            insert_tail(head, tail, v);
        }
        cin >> x;
        // printList(head);
        search_index(head, x);
    }

    return 0;
}