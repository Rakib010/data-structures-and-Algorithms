#include <bits/stdc++.h>
using namespace std;

// Stack using STL list (STL list is implemented as a Doubly Linked List internally)
// STL list is implemented as a doubly linked list, which allows O(1) insertion and deletion from both ends.

class myStack
{
public:
    list<int> l; // doubly linked list

    // push element at top
    void push(int val)
    {
        l.push_front(val); // front = top
    }

    // pop top element
    void pop()
    {
        if (!l.empty())
            l.pop_front();
    }

    // return top element
    int top()
    {
        if (!l.empty())
            return l.front();
        return -1;
    }

    // number of elements
    int size()
    {
        return l.size();
    }

    // check empty
    bool empty()
    {
        return l.empty();
    }
};

int main()
{
    myStack st;

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }

    // print stack (LIFO order)
    while (!st.empty())
    {
        cout << st.top() << endl;
        st.pop();
    }

    return 0;
}
