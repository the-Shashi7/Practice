#include<iostream>
using namespace std;
class Node{
    public:
        int data;
        Node*next;

        Node(int data){
        this->data=data;
        next=NULL;
        }
};

Node* takeInput(){
    int data;
    cin>>data;
    Node*head = NULL;
    while (data!=-1){
           Node*newNode= new Node(data);
           if (head==NULL){
               head= newNode;
           }
           else{
               Node*temp=head;
               while (temp->next!=NULL){
                   temp=temp->next;
               }
               temp->next=newNode;
           }
           cin>>data;
    }
    return head;
}

void Print(Node*head){
    while (head!=NULL){
        cout<<head->data<<" ";
            head=head->next;}
}
int main(){
    cout<<"If you want to End the loop enter (-1)"<<endl;
    Node*head= takeInput();
    Print(head);
    return 0;
}

