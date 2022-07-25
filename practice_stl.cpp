#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(4);
    v.push_back(5);
    v.push_back(7);
    v.push_back(9);
    v.push_back(23);
    v.push_back(27);
    v.pop_back();
    v.resize(8);
    // v.clear();
    cout << *(v.begin() + 4) << endl;
    cout << *(v.begin()) << endl;
    cout << *(v.end() + 1) << endl;

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}