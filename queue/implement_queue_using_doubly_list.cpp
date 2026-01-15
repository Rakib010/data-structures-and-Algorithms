#include <bits/stdc++.h>
using namespace std;

// Node class for singly linked list
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

// Custom Queue implementation using doubly linked list
class myQueue
{
public:
    Node *head = NULL; // front of the queue
    Node *tail = NULL; // rear of the queue
    int sz = 0;        // size of the queue

    // PUSH operation (enqueue)
    // Insert element at the tail (rear) of the queue
    void push(int val)
    {
        sz++; // increase size

        Node *newnode = new Node(val);

        // Corner case: queue is empty
        if (head == NULL)
        {
            head = newnode;
            tail = newnode;
            return;
        }

        // Link new node after current tail
        tail->next = newnode;
        newnode->prev = tail;
        tail = newnode;
    }

    // POP operation (dequeue)
    // Remove element from the head (front) of the queue
    void pop()
    {
        sz--; // decrease size

        Node *deletenode = head; // store old head
        head = head->next;       // move head forward
        delete deletenode;       // free memory

        // Corner case: queue becomes empty after pop
        if (head == NULL)
        {
            tail = NULL;
            return;
        }

        head->prev = NULL;
    }

    // Return front element of queue
    int front()
    {
        return head->val;
    }

    // Return last element of queue
    int back()
    {
        return tail->val;
    }

    // Return current size of queue
    int size()
    {
        return sz;
    }

    // Check if queue is empty
    bool empty()
    {
        return head == NULL;
    }
};

int main()
{
    myQueue q;

    int n;
    cin >> n;

    // Take input and push into queue
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        q.push(val);
    }

    // Print queue elements in FIFO order
    while (!q.empty())
    {
        cout << q.front() << endl;
        q.pop();
    }

    return 0;
}
