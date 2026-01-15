#include <bits/stdc++.h>
using namespace std;
int main()
{

    queue<int> q;

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