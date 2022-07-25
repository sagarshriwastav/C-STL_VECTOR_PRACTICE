#include<bits/stdc++.h>
using namespace std;

// pairs ->
// PAIRS = {4,5} OR {4,{5,6}}
// {FIRST,SECOND}
// PAIR<INT,INT(DATATYPE)>P(VARNAME)


int main(){
    pair<int,int>p;
    p.first=10;
    p.second=20;

    // cout<<"{"<<p.first<<" "<<p.second<<"}"<<endl;
    pair<int,pair<int,int>>pt;
    pt.first=7;
    pt.second.first=8;
    pt.second.second=9;
    cout<<"{"<<pt.first<<",{"<<pt.second.first<<","<<pt.second.second<<"}}"<<endl;

    return 0;

}

