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
void print_recursion(Node *head){
    if(head == NULL){
        return; 
    }
    
    print_recursion(head->next);
    cout<<head->value<<" ";
}
int main()
{
    Node * head = new Node(10);
    Node * a = new Node(10);
    Node * b = new Node(20);
    Node * c = new Node(30);
    Node * d = new Node(40);
    head->next= a;
    a->next = b;
    b->next=c;
    c->next=d;

    print_recursion(head);
    return 0;
}