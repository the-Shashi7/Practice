#include<iostream>
using namespace std;
int main(){
    int a,b,t,d,pf,ps;
    cin>>t;
    pf =0; ps=0;
    for (int i = 1; i <= t; i++){
        cin>>a>>b;
        if (a>b)  d = a-b;
        else d = b-a;

        if(d>=pf) {pf=d ; ps = i;}
        cout<<ps<<"  "<<pf<<endl;
    }
    
    return 0;
}