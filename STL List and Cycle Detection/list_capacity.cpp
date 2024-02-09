//code by Pijush Kanti Roy Partho
//
#include<bits/stdc++.h>
using namespace std;

int main(){
   list<int>mylist  = {10,20,30};
    // mylist.clear();
   cout<<mylist.size()<<endl;
   cout<<mylist.max_size()<<endl;
    mylist.resize(5);
   for(int val:mylist){
    cout<<val<<" ";
   } 
}