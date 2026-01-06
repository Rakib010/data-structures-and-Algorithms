// C++ STL list initialization and basic operations
#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l = {1, 2, 3, 4, 5};
    // cout << *l.begin(); //

    // int a[] = {10, 20, 30};
    // vector<int> v = {100, 200, 300};

    list<int> l2(l);
    // list<int> l2(a, a + 3); // array to list
    // list<int> l2(v.begin(), v.end()); // vector to list

    l2.clear();        // clear the list l2
    cout << l2.size(); // size of the list l2

    // check if the list is empty
    if (l2.empty())
    {
        cout << "list is empty" << endl;
    }
    // resize the list
    l2.resize(5, 100); // resize the list to 5 elements, new elements initialized to 100

    for (int v : l2)
    {
        cout << v << endl;
    }

    /* list modifiers  */

    // time complexity of these operations is O(1)
    l2.push_back(200); // insert 200 at the end
    l2.push_front(50); // insert 50 at the beginning
    l2.pop_back();     // remove last element
    l2.pop_front();    // remove first element
    l2.remove(100);    // remove all occurrences of 100
    l2.sort();         // sort the list
    l2.reverse();      // reverse the list

    // iterator operations(Time complexity O(n))
    next(l2.begin());    // iterator to the second element
    next(l2.begin(), 2); // iterator to the third element

    // insert elements at specific positions (time complexity O(n))
    l2.insert(l2.begin(), 150);          // insert 150 at the beginning
    l2.insert(next(l2.begin(), 2), 500); // insert 500 at the third position 

    l2.merge(l); // merge l into l2 (both lists should be sorted before merging)

    // erase elements from specific positions (time complexity O(n))
    l2.erase(next(l2.begin())); // erase the second element
    l2.erase(next(l2.begin()), next(l2.begin(), 3)); // erase from second to fourth element

    // replace elements in the list time complexity O(n)
    replace(l2.begin(), l2.end(), 200, 300); // replace all occurrences of 200 with 300

    // find an element in the list time complexity O(n)
    auto it = find(l2.begin(), l2.end(), 300); // find 300 in the list
    if (it != l2.end())
    {
        cout << "300 found in the list" << endl;
    }
    else
    {
        cout << "300 not found in the list" << endl;
    }

    for (int v : l2)
    {
        cout << v << " ";
    }

    // Operations in list 
    l2.remove(100); // remove all occurrences of 100
    l2.sort();      // sort the list
    l2.reverse();   // reverse the list 
    l2.unique();    // remove consecutive duplicates if list is sorted

     for (int v : l2)
    {
        cout << v << " ";
    }   

    //Element access in list
    cout << l2.front() << endl; // access first element 
    cout << l2.back() << endl;  // access last element

    //Iterators in list
    for (auto it = l2.begin(); it != l2.end(); ++it)
    {
        cout << *it << " ";
    }   
    
  

    return 0;
}