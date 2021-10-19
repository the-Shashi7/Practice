#include<iostream>
using namespace std;

int Fibonacci(int n){
    int c;
    int a=0;
    int b=1;
    for(int i=1;i<=n-2;i++){
              c= a+b;
              a= b; b=c;
    }
     return c;
}



int main(){
    int n;
   cout<<"Enter n"<<endl;
   cin>>n;
   cout<<Fibonacci(n);
}
