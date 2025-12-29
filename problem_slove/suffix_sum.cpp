#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // suffix sum
    int suf[n];
    suf[n - 1] = arr[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        suf[i] = arr[i] + suf[i + 1];
    }
    for (int i = 0; i < n; i++)
    {
        cout << suf[i] << " ";
    }

    return 0;
}