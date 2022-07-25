// deque

// 1. push_back()
// 2. push_front()
// 3. pop_back()
// 4. pop_front()
// 5. front()
// 6. back()

// syntax deque->
// deque<int>dq;

#include <bits/stdc++.h>
using namespace std;

int main()
{
    deque<int> dq;
    dq.push_back(5);  // 5
    dq.push_front(7); // 7,5
    dq.push_back(9);  // 7,5,9
    dq.push_back(8);  // 7,5,9,8
    dq.push_back(3);  // 7,5,9,8,3
    dq.pop_back();    // 7,5,9,8
    dq.pop_front();   // 5,9,8

    while (!dq.empty())
    {
        cout << dq.front() << " ";
        dq.pop_front();
    }
    return 0;
}