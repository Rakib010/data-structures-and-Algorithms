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

// insert at tail
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

// delete at head
void delete_at_head(Node *&head)
{
    Node *deleteNode = head;
    head = head->next;
    delete deleteNode;
};

// delete at tail
void delete_at_tail(Node *&head, Node *&tail, int idx)
{
    Node *tmp = head;
    for (int i = 1; i < idx; i++)
    {
        tmp = tmp->next;
    }
    Node *deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    delete deleteNode;
    tail = tmp;
};

// delete at any position
void delete_at_any_pos(Node *&head, int idx)
{
    Node *tmp = head;
    for (int i = 1; i < idx; i++)
    {
        tmp = tmp->next;
    }
    Node *deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    delete deleteNode;
}

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
        // insert node 
        insert_at_tail(head, tail, val);
    }
    // delete_at_head(head);
    // delete_at_tail(head, tail, 2);
    delete_at_any_pos(head, 1);
    print_linked_list(head);
    return 0;
}