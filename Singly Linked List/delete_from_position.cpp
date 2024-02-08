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

void insert_at_tail(Node*& head,int val){
    Node* newnode = new Node(val);
    if(head==NULL){
        head = newnode;
        return;
    }
    Node*tmp = head;
    while(tmp->next != NULL){
        tmp = tmp->next;
    }
    tmp->next = newnode;
}
void insert_at_head(Node*& head,int val){
    Node* newnode = new Node(val);

    newnode->next = head;
    head = newnode;
    cout<<"Inserted successfully at head"<<endl;
}
void  delete_from_position(Node* head,int pos){
    Node*tmp = head;

    for(int i=1;i<=pos-1;i++){
    tmp = tmp->next;
    }
    Node* deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    delete deleteNode;
}
void delete_head(Node *&head){
    // Node* tmp = head;

    Node* delete_head = head;
    // head->next = head;
    head = head->next;
    delete delete_head;
}
void print(Node* head){
    Node*tmp = head;
    while(tmp!=NULL){
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
    cout<<endl;
}

int main(){
    Node*head = NULL;

    while(true){
        cout<<"option 1: Insert at tail"<<endl;
        cout<<"Option 2: Insert at head"<<endl;
        cout<<"Option 3: Delete from head"<<endl;
        cout<<"Option 4: Delete from position"<<endl;
        cout<<"Option 5: print linked list"<<endl;
        cout<<"Option 6: Terminate"<<endl;
        int opt;
        cin>>opt;

        if(opt==1){
            int val;
            cin>>val;
            insert_at_tail(head,val);
        }
        else if(opt==2){
            int val;
            cin>>val;
            insert_at_head(head,val);
        }
        else if(opt==3){
            delete_head(head);
        }
        else if(opt==4){
            int pos;
            cin>>pos;
            delete_from_position(head,pos);
        }
        else if(opt==5){
            print(head);
        }
        else if(opt==6){
            break;
        }


    }
}