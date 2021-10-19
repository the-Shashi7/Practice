#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int a,b,c,d;
    cin>>a>>b;

    if (a>b) {
        c= a-b;
    }
    else{
        c = b-a;
    }

    d= a+b;

    cout<<c<<endl;
    cout<<d<<endl;

    return 0;
}
