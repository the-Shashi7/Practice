#include<iostream>
using namespace std;

class Node{
    public:
           int data;
           struct Node * next;
    Node(int data){
        this->data = data;
        next = NULL;
    }
};

void Print(Node*head){
    Node*temp = head;
    while(temp!=NULL){
        cout<<temp->data<<endl;
        temp= temp->next;
    }
};

int main(){
    Node n1(1);
    Node *head =&n1;
    Node n2(2);
    Node n3(3);
    Node n4(4);
    Node n5(5);
    n1.next =&n2;    
    n2.next =&n3;    
    n3.next =&n4;    
    n4.next =&n5;  
    Print(head);  
    return 0;
}