#include <bits/stdc++.h>
using namespace std;

// Custom Stack class
class myStack
{
public:
    vector<int> v; // vector used as dynamic array (stack container)

    // Insert element at the top of stack
    void push(int val)
    {
        v.push_back(val); // last position = top
    }

    //  Remove top element
    void pop()
    {
        if (!v.empty()) // safety check
            v.pop_back();
    }

    //  Return top element
    int top()
    {
        if (!v.empty())
            return v.back(); // last element
        return -1;           // stack empty case
    }

    //  Return number of elements
    int size()
    {
        return v.size();
    }

    //  Check if stack is empty
    bool empty()
    {
        return v.empty();
    }
};

int main()
{
    myStack st;

    // user input
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }

    // print 
    while (!st.empty())
    {
        cout << st.top() << endl;
        st.pop();
    }

    // static way
   /*  // push elements
    st.push(10);
    st.push(20);
    // print top element
    cout << st.top() << endl; // Output: 30
    // pop top element
    st.pop();
    // print new top
    cout << st.top() << endl; // Output: 20
    // stack size
    cout << st.size() << endl; // Output: 2 */

    return 0;
}
