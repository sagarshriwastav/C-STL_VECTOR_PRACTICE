// set & unordered set

// 1. insert()
// 2. find()
// 3. count()
// 4. erase()

// *sorted order
// *no duplicate   BST

// unordered set  -> unsorted  and uses hashing

#include <bits/stdc++.h>
using namespace std;

int main()
{

    set<int> s;
    // unordered_set<int> s;
    s.insert(6);
    s.insert(9); // 6,9
    s.insert(4);
    s.insert(65); // 4,6,9,65
    s.insert(71); // 4,6,9,65,71

    auto x = s.find(6);
    cout << *x << endl;

    if (s.count(6))
    {
        cout << "present" << endl;
    }
    else
        cout << "absent" << endl;
    s.erase(71);
    for (auto x : s)
    {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}