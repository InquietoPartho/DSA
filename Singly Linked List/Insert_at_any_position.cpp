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

void insert_at_tail(Node *&head,int val){
    Node *newnode  = new Node(val);

    if(head==NULL){
        head = newnode;
        return;
    }

    Node* tmp = head;

    while(tmp->next !=NULL){
        tmp = tmp->next;
    }
    tmp->next = newnode;

    cout<<"Inserted at tail"<<endl;
}

void insert_at_any_position(Node *head,int pos,int v){
    Node* newnode = new Node(v);
    Node *tmp = head;
    for(int i = 1;i<=pos-1;i++){
        tmp = tmp->next;
    }
    newnode->next = tmp->next;
     tmp->next = newnode;
    cout<<"Inserted at postion "<<pos<<endl;

}
void print_linked_list(Node* head){
    Node* tmp = head;
    cout<<"Your linked list is: ";
    while(tmp !=NULL){
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
    cout<<endl;
}
int main(){

    Node* head = NULL;

    while(true){
        cout<<"Option 1: Insert at tail"<<endl;
        cout<<"Option 2: Insert at head"<<endl;
        cout<<"Option 3: Insert at any position"<<endl;
        cout<<"Option 4: Print the Linked List"<<endl;
        cout<<"Option 5: terminate"<<endl;

        int opt;
        cin>>opt;

        if(opt==1){
            int val;
            cin>>val;
            insert_at_tail(head,val);
        }
        else if(opt==2){
        }
        else if(opt==3){
            int pos;
            cout<<"Please Enter the Position: "<<endl;
            cin>>pos;
            int val;
            cout<<"Please Enter the value: "<<endl;
            cin>>val;
            insert_at_any_position(head,pos,val);
        }

        if(opt==4){
            print_linked_list(head);
        }
        if(opt==5){
            break;
        }
    }
    
}