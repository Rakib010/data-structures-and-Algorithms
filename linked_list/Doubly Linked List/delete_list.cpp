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

// Delete at head
void delete_at_head(Node *&head, Node *&tail)
{
    Node *deleteNode = head;
    // move head pointer to next node
    head = head->next;
    delete deleteNode;
    // special case(when only one node is present)
    if (head == NULL)
    {
        tail = NULL;
        return;
    }
    head->prev = NULL;
}

// Delete at tail
void delete_at_tail(Node *&head, Node *&tail)
{
    Node *deleteNode = tail;
    // move tail pointer to previous node
    tail = tail->prev;
    delete deleteNode;

    // special case(when only one node is present)
    if (tail == NULL)
    {
        head = NULL;
        return;
    }
    tail->next = NULL;
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

// Delete at specific position
void delete_at_position(Node *&head, Node *&tail, int pos)
{
    Node *tmp = head;
    for (int i = 0; i < pos; i++)
    {
        tmp = tmp->next;
    }

    Node *delteenode = tmp->next;

    tmp->next = tmp->next->next;
    tmp->next->prev = tmp;

    delete delteenode;
}

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
// main function
int main()
{
    // static linked list
    /*  Node *head = new Node(10);
     Node *a = new Node(20);
     Node *tail = new Node(30);

     head->next = a;
     a->prev = head;

     a->next = tail;
     tail->prev = a;

     // delete_at_head(head, tail);
     // delete_at_tail(head, tail);
     delete_at_position(head, tail, 2); // delete node at position 2
      print_forward(head);
  */

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
    return 0;
}