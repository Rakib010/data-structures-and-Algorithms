#include <bits/stdc++.h>
using namespace std;

// Custom Queue implementation using STL list
class myQueue
{
public:
    list<int> l;

    void push(int val)  //0(1) 
    {
        l.push_back(val);
    }

    void pop()  //0(1) 
    {
        l.pop_front();
    }

    // Return front element of queue
    int front()  //0(1) 
    {
        return l.front();
    }

    // Return last element of queue
    int back()  //0(1) 
    {
        return l.back();
    }

    // Return current size of queue
    int size()   //0(1) 
    {
        return l.size();
    }

    // Check if queue is empty
    bool empty()  //0(1) 
    {
        return l.empty();
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
