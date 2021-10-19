#include<iostream>
using namespace std;

int main(){
    int a,t;
    int rem=0,reverse=0;
    cin>>a;
        while (a!=0){
           rem = a%10;
           reverse= reverse*10+rem;
           a=a/10;
        }
        cout<<reverse<<endl;
    return 0;
}