

#include <bits/stdc++.h>
using namespace std;

// STL stack is a container adaptor that follows LIFO and is implemented using deque by default.
// STL stack does not support traversal to preserve stack discipline.

int main()
{
    stack<int> st; // STL stack (LIFO - Last In First Out)

    int n;
    cin >> n;

    //  push operation: insert elements into stack
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        st.push(val); // push element on top of stack
    }

    // pop & top operation: remove and access elements
    while (!st.empty()) // empty() checks if stack is empty
    {
        cout << st.top() << endl; // top() returns top element
        st.pop();                 // pop() removes top element
    }

    return 0;
}
