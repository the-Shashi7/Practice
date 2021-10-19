#include<iostream>
using namespace std;
#include "fraction.cpp"

int main(){
    fraction f1(25,35);
    fraction f2(15,33);
    f1.add(f2);
    f1.display();
    f2.display();
    f1.multi(f2);
    f1.display();
}
