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
        cout << "option 3: exit" << endl;
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
            break;
        }
        else
        {
            cout << "invalid option" << endl;
        }
    }

    return 0;
}