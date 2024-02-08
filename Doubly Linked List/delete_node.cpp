#include<bits/stdc++.h>

using namespace std;
class Node{
    public:
        int val;
        Node *next;
        Node *prev;

        Node(int val){
            this->val = val;
            this->next = NULL;
            this->prev = NULL;
        }
};
void print_original(Node* head){
    Node* tmp = head;

    while(tmp!=NULL){
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
    cout<<endl;
 }
 void print_reverse(Node *tail){
    Node* tmp = tail;

    while(tmp!=NULL){
        cout<<tmp->val<<" ";
        tmp = tmp->prev;
    }
    cout<<endl;

 }
 int size(Node* head){
    Node* tmp = head;
    int cnt = 0;

    while(tmp!=NULL){
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
 }
 void deleteNode(Node* head,int pos){
    Node* tmp = head;

    for(int i=1;i<=pos-1;i++){
        tmp = tmp->next;
    }
    Node* deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    tmp->next->prev = tmp;
    delete deleteNode;
 }
 void delete_tail(Node*& tail){
    Node* deletetail = tail;
    tail = tail->prev;
    delete deletetail;
    tail->next = NULL;

 }
 void delete_head(Node* &head){
    Node* delete_head = head;
    head = head->next;
    delete delete_head;
    head->prev = NULL;
 }
int main(){

        // Node* head = NULL;
        // Node* tail = NULL;
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);
    Node* tail = c;

    //connections
    head->next = a;
    a->prev = head;
    a->next = b;
    b->prev = a;
    b->next = c;
    c->prev = b;

    // insert_at_position(head,2,100);

    // int pos,val;
    // cin>>pos>>val;
    // deleteNode(head,2);

    int pos;
    cin>>pos;
    
    if(pos>=size(head)){
        cout<<"invalid"<<endl;
    }
    else if(pos==0){
        delete_head(head);//head delete
    }
    else if(pos==size(head)-1){
        delete_tail(tail);//delete tail
    }
    else if(pos>0 && pos<size(head)){
        deleteNode(head,pos);//delete node from any position
    }
    print_original(head);
    print_reverse(tail);

}