#include<bits/stdc++.h>

using namespace std;
class Node{
    public:
        int val;
        Node *next;

        Node(int val){
            this->val = val;
            this->next = NULL;
        }
};

void   insert_at_tail(Node *&head,int val){
    Node* newnode = new Node(val);

    if(head==NULL){
        head = newnode;
        return;
    }
    Node* tmp = head;
    while(tmp->next !=NULL){
        tmp = tmp->next;
    }
    tmp->next = newnode;
}
void print_your_linked_list(Node* head){
    Node* tmp = head;
    while(tmp !=NULL){
        cout<< tmp->val<<" ";
        tmp = tmp->next;
    }
    cout<<endl<<endl;
}
int main(){
   int val;
   Node* head = NULL;

   while(true){
    cin>>val;
    if(val==-1)break;

    insert_at_tail(head,val);
   } 
   print_your_linked_list(head);
   
}