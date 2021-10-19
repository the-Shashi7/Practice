#include<iostream>
using namespace std;

class Node{
    public: int data;
            Node*next;

            Node(int data){
                this->data=data;
                next=NULL;
            }
};

Node* takeInput(){
    int data;
    cin>>data;
    Node*head=NULL;
    Node*tail=NULL;
    while(data!=-1){
        Node*newNode= new Node(data);
        if(head==NULL){
            head=newNode;
            tail=newNode;
        }
        else{
            tail->next=newNode;
            tail=tail->next;
        }
        cin>>data;
    }
    return head;
}

Node* deleteNode(Node*head,int i){
        Node*temp=head;
        int count=0;
        while(temp!=NULL && count<i-1){
            temp=temp->next;
            count ++;
        }
        if(temp!=NULL){
            Node*a = temp->next;
            Node*b = a->next;
            temp->next=b;
            delete a;
        }
    return head;
}
void Print(Node*head){
    Node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"  ";
        temp=temp->next;
    }
}
int main(){
    cout<<"Enter Linkedlist"<<endl;
    Node*head=takeInput();
    Print(head);
    cout<<"Eneter the position which you want to delete"<<endl;
    int i;
    cin>>i;
    head = deleteNode(head,(i-1));
    Print(head);
}
