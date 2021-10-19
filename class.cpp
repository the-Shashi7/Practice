#include<iostream>
using namespace std;
#include "student.cpp"

int main(void){
    //static memory allocation
    student s1;

    s1.setAge(20);                                         // s1.age=20;
    s1.rollNumber=101;
    cout<<s1.getAge()<<" "<<s1.rollNumber<<endl;
    s1.display();

    student s4(108);
    s4.display();

    //Dynamic memory allocation
    student *s5 = new student;
    (*s5).setAge(25);                                     // (*s5).age=34; //or s5->age = 34;
    (*s5).rollNumber=1002;                                //or s5->rollNumber = 1002
    cout<<(*s5).getAge()<<" "<<(*s5).rollNumber<<endl;    //getAge() function used to read private value.
    (*s5).display();                                      //display() function used to display the value .

    student s6(20,40);                                   //using "this" keyword in parameterized contructor....   
    s6.display();                                        //for self declaration.

    student s7(s6);                                     //inbuilt copy constructor 
    s7.display();



}