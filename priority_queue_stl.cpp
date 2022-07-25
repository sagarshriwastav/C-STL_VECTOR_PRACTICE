// priority queue

// 1. push()
// 2. pop()
// 3. top()
// 4. empty()
// 5. size()

#include <bits/stdc++.h>
using namespace std;

int main()
{

    // priority_queue<int> pq; // max heap
    priority_queue<int, vector<int>, greater<int>> pq; // min heap
    pq.push(5);
    pq.push(7);
    pq.push(6);
    pq.push(23);
    cout << pq.size() << endl;

    while (!pq.empty())
    {
        cout << pq.top() << " ";
        pq.pop();
    }
    return 0;
}