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
void countList(Node *head)
{
    int count = 0;
    Node *tmp = head;
    while (tmp != NULL)
    {
        count++;
        tmp = tmp->next;
    }
    cout << count;
}
void printList(Node *head)
{
    cout << "List: ";
    Node *tmp = head;
}
void duplicate_value(Node *head)
{
    int flag = 0;
    Node *tmp = head;
    while (tmp != NULL)
    {
        Node *tmp2 = tmp->next;
        while (tmp2 != NULL)
        {
            if (tmp->value == tmp2->value)
            {
                flag = 1;
                break;
            }
            tmp2 = tmp2->next;
        }
        tmp = tmp->next;
    }
    if (flag == 1)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}
void middleElement(Node *head)
{
    if (head == NULL)
    {
        cout << "The list is empty." << endl;
        return;
    }

    Node *slow = head;
    Node *fast = head;
    Node *prev = NULL;

    while (fast != NULL && fast->next != NULL)
    {
        prev = slow;
        slow = slow->next;
        fast = fast->next->next;
    }

    if (fast == NULL)
    {
        // Even number of nodes
        cout << prev->value << " " << slow->value << endl;
    }
    else
    {
        // Odd number of nodes
        cout << slow->value << endl;
    }
}
void check_sort(Node *head)
{
    Node *tmp = head;
    while (tmp->next != NULL)
    {
        if (tmp->value > tmp->next->value)
        {
            cout << "NO";
            return;
        }
        tmp = tmp->next;
    }
    cout << "YES";
}
int main()
{
    int value;
    Node *head = NULL;
    while (true)
    {
        cin >> value;
        if (value == -1)
            break;
        insertATail(head, value);
    }
    printList(head);
    countList(head);
    duplicate_value(head);
    middleElement(head);
    check_sort(head);
    return 0;
}