#include<iostream>
using namespace std;
//Making Node for LinkedList
class Node{
    public:
           int data;
           struct Node * next;
    Node(int data){
        this->data = data;
        next = NULL;
    }
};
//Taking Input 
Node* takeInput(){
    int data;
    cin>>data;
    Node*head = NULL;
    Node*tail = NULL;
    while (data!= -1){
        Node *newNode = new Node(data);
        if(head== NULL){
            head = newNode;
            tail = newNode;
        }else{
            /* Node*temp =head;
            while (temp->next != NULL){
                temp = temp->next;
            }    
           temp->next = newNode; */
           tail->next =newNode;
           tail = tail->next;
        }  
        cin>>data;
    }
    return head;
}
// Node insertions
Node* insertNode(Node*head,int i ,int data){
    Node*newNode = new Node(data);
    int count = 0;
    Node *temp = head;
    if(i==0){
        newNode ->next =head;
        head = newNode;
        return head;
    }
    while (temp != NULL && count < i-1){
        temp = temp ->next;
        count++;
    }
    if(temp != NULL){
        Node *a =temp->next;
       // newNode->next = temp->next;
        temp->next = newNode;
        newNode ->next =a;
    }
    return head;
}
//Node Printing
void Print(Node*head){
    Node*temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp= temp->next;
    }
};

int main(){
    /* Node n1(1);
    Node *head =&n1;
    Node n2(2);
    Node n3(3);
    Node n4(4);
    Node n5(5);
    n1.next =&n2;    
    n2.next =&n3;    
    n3.next =&n4;    
    n4.next =&n5;  */ 
    Node*head = takeInput();
    Print(head);
    int i,data;
    cin>>i>>data;
    insertNode(head,i,data);
    Print(head);  
    return 0;
}