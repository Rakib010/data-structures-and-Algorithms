#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    // original array (1-based indexing)
    int a[n + 1];

    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    // prefix sum array
    int pre[n + 1];

    // base case
    pre[1] = a[1];

    // build prefix sum
    for (int i = 2; i <= n; i++)
    {
        pre[i] = pre[i - 1] + a[i];
    }

    // printing prefix sum (optional)
    for (int i = 1; i <= n; i++)
    {
        cout << pre[i] << " ";
    }

    return 0;
}
