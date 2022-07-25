#include <bits/stdc++.h>
using namespace std;

int main()
{

    // bianry search -> It returns wether the number
    //... is present in an array or not.
    // Array must be in sorted otherwise it returns wrong ans.

    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    if(binary_search(a,a+n,4)){
        cout<<"present";
    }
    else {
        cout<<"absent";
    }
    return 0;
}