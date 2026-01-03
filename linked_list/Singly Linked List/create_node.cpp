#include <bits/stdc++.h>
using namespace std;

// Node structure
class Node
{
public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

int main()
{
    // static node
    Node a(10), b(20), c(30);

    // node link
    a.next = &b;
    b.next = &c;
    // print static linked list
    cout << a.val << endl;
    cout << a.next->val << " " << a.next->next->val << endl;

    // dynamic node
    Node *head = new Node(10);
    Node *x = new Node(20);
    Node *y = new Node(30);

    // node link
    head->next = x;
    x->next = y;

    // print dynamic linked list
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << endl;
        tmp = tmp->next;
    }

    return 0;
}