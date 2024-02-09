//code by Pijush Kanti Roy Partho
//
#include<bits/stdc++.h>
using namespace std;

int main(){
    list<int>mylist = {10,20,30};
    mylist.push_back(40);
    mylist.push_back(50);
    // mylist.pop_back(100);
    // mylist.pop_back(200);
    mylist.push_front(100);
    mylist.push_front(200);
    mylist.pop_front();
    mylist.pop_front();
    vector<int> v = {3,4,5,6};
    // mylist.insert(next(mylist.begin(),2),{45,65,75});
    mylist.insert(next(mylist.begin(),2), v.begin(),v.end());
    mylist.erase(next(mylist.begin(),2),next(mylist.begin(),5));
    

    for(int val:mylist){
        cout<<val<<" ";
    }
}