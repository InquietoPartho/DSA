//code by Pijush Kanti Roy Partho
//
#include<bits/stdc++.h>
using namespace std;

int main(){
    // list<int>mylist;
    // list<int>mylist(10);
    // list<int>mylist(10,5);
    int ar[5] = {10,20,30,40,50};
    list<int>mylist(ar,ar+5);
    // cout<<mylist.size();

    // for(auto it = mylist.begin(); it != mylist.end();it++){
    //     cout<<*it<<endl;
    // }
    for(int val:mylist){
        cout<<val<<" ";
    }
}