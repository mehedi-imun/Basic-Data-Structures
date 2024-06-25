#include <bits/stdc++.h>
using namespace std;

int main()
{
    class Node
    {
    public:
    int value;
    Node *next;
    };
    Node a,b;
    a.value = 10;
    b.value = 20;
    a.next = &b;
    b.next = NULL;
    cout<< a.value << endl;
    cout << a.next->value;

    return 0;
}