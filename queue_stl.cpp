// queue

// 1. push()
// 2. pop()
// 3. size()
// 4. front()
// 5. back()
// 6. empty()

// syntax queue->
// queue<int>q;

#include <bits/stdc++.h>
using namespace std;

int main()
{

    queue<int> q;
    q.push(4);
    q.push(5);
    q.push(8);
    q.push(7);
    cout << q.size() << endl;
    cout << q.front() << endl;
    cout << q.back() << endl;
    cout << q.empty() << endl;

    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}