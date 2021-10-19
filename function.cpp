#include<iostream>
using namespace std;
int swap(int x,int y){
    cout<<"("<<x<<" , "<<y<<")"<<endl;
    int *ptr = &x;
    int *ptr2 = &y; ptr2 = ptr;
    cout <<"Swap"<<"("<<x<<" , "<<y<<")"<<endl;
    return x,y;
}
int main() {
    int x,y;
    cin>>x>>y;
    swap(x,y);
}