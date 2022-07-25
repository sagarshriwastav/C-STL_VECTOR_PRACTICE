#include<bits/stdc++.h>
using namespace std;

int main (){

    //builtin_popcount () -> It returns the set bits
    //...of a number in binary representation.

    int n;
    cin>>n;
    int ans=__builtin_popcount(n);
    cout<<ans;

    return 0;
}