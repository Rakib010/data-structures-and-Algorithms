#include <bits/stdc++.h>
using namespace std;

// create node
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
    // dynamic node
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);

    // node link
    head->next = a;
    a->next = b;

    /*  cout << head->val << endl;
     cout << head->next->val << endl;
     cout << head->next->next->val << endl; */

    // print linklist
    Node *tmp = head;  // tmp er vitore head rakha hoise
    while (tmp != NULL)
    {
        cout << tmp->val << endl;
        tmp = tmp->next;
    }

    return 0;
}