#include<iostream>
using namespace std;

class Node{
    public: int data;
            Node*next;
            //creating constructor
            Node(int data){
                this->data=data;
                next=NULL;
            }
    };
    //creating print function
void print(Node*head){
    while (head!=NULL){
        cout<< head->data<<endl;
        head= head->next;
    } 
}

int main(){                 
    Node n1(1);
    Node*head=&n1;
    Node n2(2);            // n1.data=1;  // n2.data=2;// n3.data=3;// n4.data=4;
    Node n3(3);
    Node n4(4);
     //linking Nodes to each others..
    n1.next=&n2;
    n2.next=&n3;
    n3.next=&n4;
    n4.next=NULL;
    print(head);
    return 0;
}