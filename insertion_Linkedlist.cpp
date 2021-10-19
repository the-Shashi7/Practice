#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node *next;

        Node(int data){
            this->data=data;
            next=NULL;
        }
};

Node * takeInput(){
    int data;
    cin>>data;
    Node*head=NULL;
    Node*tail=NULL;
    while(data!=-1){
        Node*newNode= new Node(data);

        if (head==NULL)
        {   head= newNode;
            tail= newNode;
        }
        else{
            tail->next=newNode;
            tail=tail->next;
        }
        cin>>data;
    }
return head;
}

Node* insertNode(Node*head,int i ,int data){
            Node*newNode = new Node(data);
            int count = 0;
            Node*temp=head;

            while(temp!=NULL && count<i-1){
                temp=temp->next;
                count ++;
            }
            if(temp!=NULL){
            Node*a = temp->next;
            temp->next=newNode;
            newNode->next=a;
            }
      return head;
}
void Print(Node*head){
        Node*temp=head;
       while(temp!=NULL){
          cout<<temp->data<<endl;
          temp= temp->next;
       }
}
int main(){

    cout<<"Enter Likedlist"<<endl;
    Node*head= takeInput();
    cout<<"Linkedlist you Enter!"<<endl;
    Print(head);
    int i,data;
    cin>> i>>data;
    head= insertNode(head,i,data);
    Print(head);
}
