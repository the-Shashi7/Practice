#include<iostream>
using namespace std;


int fact( int n){
    return n*(n-1);
}

int main(){
    int n;
    cin>>n;

    cout<<"you enter :" <<fact(n);
}