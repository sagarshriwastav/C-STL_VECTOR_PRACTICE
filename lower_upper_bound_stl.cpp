#include <bits/stdc++.h>
using namespace std;

int main()
{

    // lower_bound-> if true returns iterator if not true returns next iterator
    // upper_bound-> It returns next iterator in both the cases.
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    // auto itr = lower_bound(a, a + n, 3);
    auto itr = upper_bound(a, a + n, 6);
    // auto itr = upper_bound(a, a + n, 3)-a; // It returns the index value of that iterator.
    cout << itr<<endl;
    cout << *itr;

    return 0;
}