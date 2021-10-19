#include<iostream>
using namespace std;

class complex{
    int real;
    int imag ;

    public:
        complex(int r=0,int i=0 ){   //parameterized constructor
            real = r;
            imag =i;
        }
        void display(){
            cout<<real<<" + "<<imag<<"i"<<endl;
        }
        complex operator+(complex const &obj){    //operator overloading
            complex temp;
            temp.real= real+ obj.real;
            temp.imag =imag +obj.imag;
            return temp;
        }
};
int main(){
    complex c1(5,4);
    complex c2(3,5);
    complex c3 = c1+c2;
    c3.display();
return 0;
}