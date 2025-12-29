// duplicate value check

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
    int flag = 0;
    sort(arr, arr + n);
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] == arr[i + 1])
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}