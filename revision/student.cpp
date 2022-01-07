#include<iostream>
using namespace std;
#include "Student_class.cpp"

int main(){
    Fraction f1(10,2);
    Fraction f2(15,4);

    f1.add(f2);
    f1.Print();
    f2.Print();
    //char name = "Shashi";
    Student s1(23,"Shashi Kumar");
    Student s2(21,"Ravi");

    s1.Display();
    s2.Display();

    return 0;
}
