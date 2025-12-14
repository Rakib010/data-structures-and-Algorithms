#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;    // 0(1)
    cin >> n; // 0(1)

    // 0(n)
    for (int i = 0; i <= n; i++)
    {
        cout << i << " ";
    }

    return 0; // 0(n)
   
}

// final complexcity -> 0(n) bcz worst case nei sb smy!
// O(n) মানে:input যত বড় হবে, time ততটাই বাড়বে same ratio তে
//Common Beginner Mistakes ❌
/* একটা loop মানেই O(n)
➡️ ভুল
👉 loop কতবার চলছে সেটা matter করে
“return আগেই হলে O(1)”
➡️ worst case ধরতে হয় */

//linearSearch
/* function linearSearch(arr, target) {
  for (let i = 0; i < arr.length; i++) {
    if (arr[i] === target) {
      return i;
    }
  }
  return -1;
}
 */
