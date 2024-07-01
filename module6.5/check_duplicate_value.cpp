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
void countList(Node * head){
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
    while (tmp != NULL)
    {
        cout << tmp->value << " ";
        tmp = tmp->next;
    }
}
void duplicate_value(Node * head){
    int flag = 0;
    Node *tmp = head;
    while (tmp != NULL)
    {
        Node *tmp2 = tmp->next;
        while (tmp2 != NULL)
        {
            if(tmp->value == tmp2->value){
                flag = 1;
                break;
            }
            tmp2 = tmp2->next;
        }
        tmp = tmp->next;
    }
    if(flag == 1){
        cout << "YES";
    }else{
        cout << "NO";
    }
}
int main()
{
    int value;
    Node *head = NULL;
    while (true)
    {
        cin >> value;
        if(value == -1) break;
        insertATail(head, value);
        
    }
    // printList(head);
//    countList(head);
    duplicate_value(head);
    return 0;
}