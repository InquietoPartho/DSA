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

void insert_at_tail(Node*&head,int v){
    Node* newnode = new Node(v);
    if(head==NULL){
        head = newnode;
        return;
    }
    Node* tmp = head;

    while(tmp->next != NULL){
        tmp = tmp->next;
    }
    tmp->next = newnode;

}
void print_linked_list(Node *head){
    Node*tmp = head;
     cout<<"Your linked list is: ";
    while(tmp !=NULL){
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
    cout<<endl;
}

int main(){
    Node *head = NULL;
   while(true){
    cout<<"opt 1: Insert at tail"<<endl;
    cout<<"opt 2: Print your linkedlist"<<endl;
    cout<<"opt 3: Terminate"<<endl;
    int op;
    cin>>op;
    if(op==1){
        cout<<"Please Enter the val: ";
        int val;
        cin>>val;
        insert_at_tail(head,val);
    }
    else if(op==2){
        print_linked_list(head);
    }
    else{
        break;
    }
    
   }

}