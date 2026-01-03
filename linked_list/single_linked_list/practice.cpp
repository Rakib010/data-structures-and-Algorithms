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

// insert_at_head
void insert_at_head(Node *&head, int val)
{
    Node *newnode = new Node(val);
    newnode->next = head;
    head = newnode;
}

// insert_at_tail
void insert_at_tail(Node *&head, int val)
{
    Node *newnode = new Node(val);

    // If the list is empty, make the new node the head
    if (head == NULL)
    {
        head = newnode;
        return;
    }

    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next; // Move to the next node
    }
    tmp->next = newnode;
}

// insert at specific position
void insert_at_specific_position()
{
}

// display linkedlist
void print_linked_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
}

int main()
{
    // take input manually to create a linked list
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);

    // linking the nodes
    head->next = a;
    a->next = b;

    // insert at head and tail
    insert_at_head(head, 5);
    insert_at_tail(head, 40);

    // display linked list
    print_linked_list(head);

    return 0;
}
