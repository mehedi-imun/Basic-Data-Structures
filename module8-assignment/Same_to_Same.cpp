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
void check_element_same(Node *head1, Node *head2)
{
    Node *tmp1 = head1;
    Node *tmp2 = head2;
    while (tmp1 != NULL && tmp2 != NULL)
    {
        if (tmp1->value != tmp2->value)
        {
            cout << "NO" << endl;
            return;
        }
        tmp1 = tmp1->next;
        tmp2 = tmp2->next;
    }
    if (tmp1 == NULL && tmp2 == NULL)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }


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
    // printList(head);
    // cout << endl;
    // printList(head2);
check_element_same(head, head2);
    return 0;
}