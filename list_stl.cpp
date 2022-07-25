// list is like linked list

// functons in list are->

// 1. push-front()        5. pop-front()
// 2. push-back()         6. pop-back()
// 3. front()             7. reverse()
// 4. back()              8. sort()

// syntax--  list<int>l;

#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l;
    l.push_back(4);  // 4
    l.push_back(5);  // 4,5
    l.push_front(8); // 8,4,5

    list<int>::iterator it;
    for (it = l.begin(); it != l.end(); it++)
    {
        cout << *(it) << " ";
    }
    cout << endl;
    cout << l.front() << endl;
    cout << l.back() << endl;

    l.sort();
    for (it = l.begin(); it != l.end(); it++)
    {
        cout << *(it) << " ";
    }
    cout << endl;
    l.reverse();
    for (it = l.begin(); it != l.end(); it++)
    {
        cout << *(it) << " ";
    }
    cout << endl;
    l.pop_back();
    for (it = l.begin(); it != l.end(); it++)
    {
        cout << *(it) << " ";
    }
    cout << endl;
    l.pop_front();
    for (it = l.begin(); it != l.end(); it++)
    {
        cout << *(it) << " ";
    }
    cout << endl;
    return 0;
}