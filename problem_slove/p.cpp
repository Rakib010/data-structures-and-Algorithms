#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    // sort the array
    sort(v.begin(), v.end());

    int q;
    cin >> q;

    // process queries
    while (q--)
    {
        int x;
        cin >> x;

        // binary search
        if (binary_search(v.begin(), v.end(), x))
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}

