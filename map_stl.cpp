// MAP->
// key,value pair   map<int,int>m;
// 1. insert()
// 2. find
// by default data are sorted according to the keys


// unordered map ->
// unsorted map   unsorted_map<int,int>um;



#include<bits/stdc++.h>
using namespace std;

int main(){
    //map
    map<int,int>m;
    // unordered_map<int,int>m;
    m.insert({1,2});
    m[3]=5;
    m[4]=8;
    m[2]=20;
    
    if(m[10]){
    // if(m.find(4)!=m.end()){
        cout<<"present"<<endl;
    }
    else cout<<"absent"<<endl;

    auto val =m.find(4);
    cout<<val->second<<' '<<val->first<<endl;
    
    // for(auto x:m){
    //     cout<<x.first<<' '<<x.second<<endl;
    // }
    return 0;
}