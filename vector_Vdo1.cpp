// C++ STL "STANDARD TEMPLATE LIBRARY"

// different functoins in vector (VECTORS FUNCTIONS):-

// 1. PUSH-BACK()      10. INSERT()
// 2. POP-BACK()       11. REVERSE()
// 3. SIZE()           12. SORT()
// 4. RESIZE()
// 5. BEGIN()
// 6. END()            (Vectors is dynamic in nature i.e.
// 7. CLEAR()          we don't have to assign its size.)
// 8. EMPTY()
// 9. ERASE()

// initialisation=> vector<int(datatype)>vec(var. name);
// lets start code here---

#include <bits/stdc++.h>
using namespace std;

int main()
{
    //  v-> 4,6,3
    vector<int> vec;
    vec.push_back(4);
    vec.push_back(5);
    vec.push_back(6);
    vec.pop_back();
    vec.resize(5);
    vec.clear();
    // cout<<vec.size()<<endl;
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
    cout << endl;
    cout << vec.size() << endl;
    cout << *(vec.begin() + 4) << endl;
    cout << *(vec.end() + 1) << endl;
    if (vec.empty())
    {
        cout << "empty" << endl;
    }
    else
        cout << "not empty";
    return 0;
}