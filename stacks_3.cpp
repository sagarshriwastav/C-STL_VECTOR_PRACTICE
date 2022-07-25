#include <bits/stdc++.h>
using namespace std;

// STACK->

// STACK FUNCTOINS->
// 1. PUSH()
// 2. POP()
// 3. TOP()
// 4. EMPTY()
// 5. SIZE()

int main()
{
    stack<int> s;
    s.push(4);
    s.push(5);
    s.push(6);
    s.push(8);
    cout << s.top();
    cout << endl;
    s.pop();
    cout << s.top();
    cout << endl;
    cout<<s.size();
    cout << endl;
    if(s.empty()){
        cout<<"EMPTY"<<endl;
    }
    else{
        cout<<"NOT EMPTY"<<endl;
    }
    while(!s.empty()){
        int val=s.top();
        cout<<val<<" ";
        s.pop();
    }
    return 0;
}