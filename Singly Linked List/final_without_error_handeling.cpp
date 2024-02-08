//Singly-linked list operation Project: made by Pijush Kanti Roy Partho ^_^

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

void insert_at_tail(Node*& head,int v){
    Node* newnode = new Node(v);
    

    if(head==NULL){
        head = newnode;
        return;
    }

    Node* tmp = head;
    while(tmp->next !=NULL){
        tmp = tmp->next;
    }
    tmp->next = newnode;
    cout<<endl<<"Successfully added value at tail"<<endl;
}

void insert_at_any_position(Node *head,int pos,int val){
    Node* newnode = new Node(val);
    Node *tmp = head;
    for(int i=1;i<=pos-1;i++){
        tmp = tmp->next;
    }
    newnode->next = tmp->next;
    tmp->next = newnode;

    cout<<"Inserted at any position has successfully added"<<endl;

}
void insert_at_head(Node *&head,int val){
    Node* newnode = new Node(val);

    newnode->next = head;
    head = newnode;
    cout<<"Inserted value at head position has successfully done! "<<endl<<endl;
}

void delete_from_any_position(Node* head,int pos){
    Node *tmp = head;

    for(int i=1;i<=pos-1;i++){
        tmp = tmp->next;
    }
    Node* deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    delete deleteNode;
    cout<<"Successfully Deleted the value form the index" <<pos<<endl;
}

void delete_the_head(Node*& head){
    Node* deleteHead = head;
    head = head->next;
    delete deleteHead;

    cout<<endl<<"The head of the linked list has been deleted properly!!!"<<endl;
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
    Node* head = NULL;

    while(true){
        cout<<"Option 1: Insert at tail"<<endl;
        cout<<"Option 2: Insert at any position"<<endl;
        cout<<"Option 3: Insert at head"<<endl;
        cout<<"Option 4: Delete from any Position"<<endl;
        cout<<"Option 5: Delete the head"<<endl;
        cout<<"Option 6: Print your linked list"<<endl;
        cout<<"Option 7: Terminate your program"<<endl;

        int opt;
        cin>>opt;

        if(opt==1){
            int val;
            cin>>val;
            insert_at_tail(head,val);
        }

        else if(opt==2){
            int pos,val;
            cout<<"Please enter the position you want to add value: ";
            cin>>pos;
            cout<<"Please enter the value you want to add to your linked list: ";
            cin>>val;
            if(pos==0){
                insert_at_head(head,val);
            }
            else{
                insert_at_any_position(head,pos,val);
            }


        }
        else if(opt==3){
            int val;
            cin>>val;
            insert_at_head(head,val);
        }

        else if(opt==4){
            int pos;
            cout<<"Please Enter the index you want to remove from your linked list: ";
            cin>>pos;

            delete_from_any_position(head,pos);
        }
        else if(opt==5){
            delete_the_head(head);
        }
        else if(opt==6){
            print_your_linked_list(head);
        }
        else if(opt==7){
            break;
        }

    }
}