//code by Pijush Kanti Roy Partho
//
#include<bits/stdc++.h>
using namespace std;

int main(){
   list<int>mylist = {1,3,4,5,6,5,7};
//    mylist.sort();
    mylist.sort(greater<int>());
    mylist.unique();

    mylist.reverse();
   for(int val:mylist){
    cout<<val<<" ";
   }



}