#include<iostream>
using namespace std;
#include "complexNumber_class.cpp"

int main(){
    int real1,imaginary1;
    int real2,imaginary2;
    int choose;
    cout<<"Enter real1"<<endl;
    cin>>real1;
    cout<<"Enter imaginary1"<<endl;
    cin>>imaginary1;
    cout<<"Enter real2"<<endl;
    cin>>real2;
    cout<<"Enter imaginary2"<<endl;
    cin>>imaginary2;

    complexNumber c1(real1,imaginary1);
    complexNumber c2(real2,imaginary2);

    c1.display();
    c2.display();
    cout<<"CHOOSE 1 FOR ADDITION OR CHOOSE 2 FOR MULTIPLICATION"<<endl;
    cin>>choose;

    if(choose==1){

        c1.add(c2);
        c1.display();}
    else if(choose==2){
        c1.multi(c2);
        c1.display();
    }
    else{
        return 0;
    }

}