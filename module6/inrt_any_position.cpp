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
        cout << "inserted at head"<<endl;
        return;
    }
    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newNode;
    cout << "inserted at tail";
};
void insertPosition(Node *head, int position, int v)
{
    Node *newNode = new Node(v);
    Node *tmp = head;
    for (int i = 1; i < position - 1; i++)
    {
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
    cout << endl
         << "inserted at position" << position << endl;
}
void printList(Node *head)
{
    cout << "List: ";
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->value << " ";
        tmp = tmp->next;
    }
}
int main()
{
    Node *head = NULL;
    while (true)
    {
        cout << "option 1: Insert a value at the tail" << endl;
        cout << "option 2: print the list" << endl;
        cout << "option 3: insert at position" << endl;
        cout << "option 4: exit" << endl;
        int option;
        cin >> option;
        if (option == 1)
        {
            cout << "input value:";
            int value;
            cin >> value;
            insertATail(head, value);
        }
        else if (option == 2)
        {
            cout << endl;
            Node *tmp = head;
            while (tmp != NULL)
            {
                cout << tmp->value << " ";
                tmp = tmp->next;
            }
            cout << endl;
        }
        else if (option == 3)
        {
            int position, v;
            cout << "input position:";
            cin >> position;
            cout << "input value:";
            cin >> v;
            insertPosition(head, position, v);
        }
        else if (option == 4)
        {
            break;
        }
        else
        {
            cout << "invalid option" << endl;
            break;
        }
    }

    return 0;
}