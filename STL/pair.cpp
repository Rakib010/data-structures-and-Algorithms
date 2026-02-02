
#include <bits/stdc++.h>
using namespace std;
int main()
{
    // pair<string, int> p;
    pair<int, int> p;
    // p = {2, 3};
    p = make_pair(2, 3);
    cout << p.first << endl;
    cout << p.second << endl;

    // pair using in vector
    int n;
    cin >> n;
    vector<pair<int, int>> v(5); // pair type vector
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].first >> v[i].second;
    }
    for (int i = 0; i < n; i++)
    {
        cout << v[i].first << v[i].second << endl;
    }

    return 0;
}