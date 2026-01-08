#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node *prev;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

// Insert at tail
void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);

    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }

    tail->next = newnode;
    newnode->prev = tail;
    tail = newnode;
};

// reverse (using 2 pointer technique)
void reverse_list(Node *head, Node *tail)
{
    Node *i = head;
    Node *j = tail;

    // even input 1st condition, odd input 2nd condition
    while (i != j && i->prev != j)
    {
        swap(i->val, j->val);
        i = i->next;
        j = j->prev;
    }
}

// Print forward
void print_forward(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
int main()
{
    // user input linked list
    Node *head = NULL;
    Node *tail = NULL;

    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        insert_at_tail(head, tail, val);
    }
    print_forward(head);
    reverse_list(head, tail);
    print_forward(head);
    return 0;
}