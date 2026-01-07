
#include <bits/stdc++.h>
using namespace std;

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

// function to insert a new node at the tail of the linked list
void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);

    // if the list is empty
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    // add new node at the end using tail pointer
    tail->next = newnode;
    tail = newnode;
};

// using recursion to print in reverse order
void print_reverse(Node *tmp)
{
    if (tmp == NULL)
    {
        return;
    }
    print_reverse(tmp->next);
    cout << tmp->val << " ";
};

// reverse
void reverse_linked_list(Node *&head, Node *&tail, Node *current)
{
    // base case
    if (current->next == NULL)
    {
        head = current;
        return;
    }
    reverse_linked_list(head, tail, current->next);
    current->next->next = current;
    current->next = NULL;
    tail = current; 
}

int main()
{
    // Initialize head and tail pointers to NULL
    Node *head = NULL;
    Node *tail = NULL;

    // Read user input until -1 is entered
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_at_tail(head, tail, val);
    }

    reverse_linked_list(head, tail, head);
    print_reverse(head);

    return 0;
}