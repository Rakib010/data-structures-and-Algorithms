/* #include <bits/stdc++.h>
using namespace std;
// Take two stacks of size N and M as input and check if both of them are the same or not
class myStack
{
public:
    vector<int> n;

    void push(int val)
    {
        n.push_back(val);
    }
    void pop()
    {

        n.pop_back();
    }
    int top()
    {
        return n.back();
    }
    bool empty()
    {
        return n.empty();
    }
    int size()
    {
        return n.size();
    }
};

int main()
{
    myStack s1, s2;

    // s1
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        s1.push(val);
    }

    // s2
    int m;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int val;
        cin >> val;
        s2.push(val);
    }

    // size
    if (s1.size() != s1.size())
    {
        cout << "NO";
        return 0;
    }

    // value check (LIFO order)
    while (!s1.empty())
    {
        if (s1.top() != s2.top())
        {
            cout << "NO";
            return 0;
        }
        s1.pop();
        s2.pop();
    }
    cout << "YES";

    return 0;
} */

// Take a stack of size N and a queue of size M as input. Then check if both of them are the same or not in the order of removing. You should use STL to solve this problem.
/* #include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    stack<int> s1, s2;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        s1.push(x);
    }

    while (!s1.empty())
    {
        s2.push(s1.top());
        s1.pop();
    }

    while (!s2.empty())
    {
        cout << s2.top() << " ";
        s2.pop();
    }

    return 0;
} */

// Take a stack of size N and a queue of size M as input. Then check if both of them are the same or not in the order of removing. You should use STL to solve this problem.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> s1, s2;

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        s1.push(x);
    }

    int m;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        s2.push(x);
    }

    

    while (!s2.empty())
    {
        cout << s2.top() << " ";
        s2.pop();
    }

    return 0;
}
