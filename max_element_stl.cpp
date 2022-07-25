#include<bits/stdc++.h>
using namespace std;

int main(){
    //max_element

    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];

    int ma=0;
    // for(int i=0;i<n;i++){
    //     if(a[i]>ma){
    //         ma=a[i];
    //     }
    // }
    ma=*max_element(a,a+n);
    cout<<ma;
    return 0;
}