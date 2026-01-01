// Equilibrium Index হলো এমন একটা index i | যেখানে index i এর বাম পাশে থাকা সব element এর যোগফল = ডান পাশে থাকা সব element এর যোগফল

// problem solve using prefix & suffix sum
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<long long> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    // prefix sum
    vector<int> ps(n);
    ps[0] = v[0];
    for (int i = 1; i < n; i++)
    {
        ps[i] = ps[i - 1] + v[i];
    }

    // suffix sum
    vector<int> ss(n);
    ss[n - 1] = v[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        ss[i] = ss[i + 1] + v[i];
    }

    // equilibrium index check
    for (int i = 0; i < n; i++)
    {
        if (ps[i] == ss[i])
        {
            cout << i << endl;
            break;
        }
    }

    return 0;
}

// using nested loop t.c = 0(n^2)
/* #include <bits/stdc++.h>
using namespace std;
int main()
{
    int n; // SC - O(1)
    cin >> n;
    vector<int> v; // Space Com: O(N)
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    // O(N*N) = 10^5 * 10^5 = 10^10
    for (int i = 0; i < n; i++) // O(N)
    {
        int lower_element_sum = 0, higher_element_sum = 0;
        for (int j = 0; j < i; j++) // O(N)
        {
            lower_element_sum += v[j];
        }
        for (int j = i + 1; j < n; j++) // O(N)
        {
            higher_element_sum += v[j];
        }
        // cout << i << " " << lower_element_sum << " " << higher_element_sum << endl;
        if (lower_element_sum == higher_element_sum)
        {
            cout << i << endl;
            break;
        }
    }

    return 0;
} */