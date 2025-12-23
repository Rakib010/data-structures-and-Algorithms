#include <bits/stdc++.h>
using namespace std;
int main()
{
    // vector<int> v2(5);             // size 5, values =
    // vector<int> v3(5, 10);         // size 5, all  values = 10
    // vector<int> v4 = {1, 2, 3, 4}; // initializer list

    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    cout << v.capacity();

    vector<int> v1;
    v1 = v;
    for (int x : v1)
    {
        cout << x << " ";
    }
    v.pop_back();
    // v.insert(postion,value)
    v.insert(v.begin() + 2, 100);
    v.erase(v.begin() + 2);

    vector<int> v5 = {1, 2, 3, 2, 4, 2};
    replace(v5.begin(), v5.end(), 2, 10);
    for (int x : v5)
    {
        cout << x << " ";
    }

    //  vector<int>::iterator it = find(v5.begin(), v5.end(), 100);
    auto it = find(v5.begin(), v5.end(), 100);
    if (it == v5.end())
    {
        cout << "Not Found";
    }
    else
    {
        cout << "Found";
    }

    // iterator
    for (auto it = v.begin(); it < v.end(); it++)
    {
        cout << *it << "";
    }

    // vector input (int)
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        /* int x;
        cin >> x;
        v.push_back(x); */
    }
    for (int i = 0; i < n; i++)
    {
        cout << v[i];
    }

    // vector string
    int x;
    cin >> x;
    // cin.ignore();
    vector<string> v11(x);
    for (int i = 0; i < x; i++)
    {
        // getline(cin.v[i]);
        cin >> v11[i];
    }
    for (string s : v11)
    {
        cout << s << endl;
    }

    return 0;
}