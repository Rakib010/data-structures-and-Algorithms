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
/* void insert_at_tail(Node *&head, int val)
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
} */

// insert_at_tail optimized
void insert_at_tail_optimized(Node *&head, Node *&tail, int val)
{
    // create a new node
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

// insert at any position
void insert_at_any_position(Node *&head, int indx, int val)
{
    Node *newnode = new Node(val);

    Node *tmp = head;
    for (int i = 1; i < indx; i++)
    {
        tmp = tmp->next;
    }
    newnode->next = tmp->next;
    tmp->next = newnode;
};

// display linked list
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
    Node *tail = new Node(30);

    // linking the nodes
    head->next = a;
    a->next = tail;

    // insert at head and tail and specific position
    insert_at_head(head, 5);
    // 3 number index er por postion a insert kora jacche na ** 
    insert_at_any_position(head, 3, 25);
    // insert_at_tail(head, 40);
    insert_at_tail_optimized(head, tail, 50);

    // display linked list
    print_linked_list(head);

    return 0;
}
