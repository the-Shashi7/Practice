#include<bits/stdc++.h>
using namespace std;

void printspell(int n, string str[]){
    if(n==0) return;

    printspell(n/10, str);
    cout<<str[n%10]<<" ";
}

int main(){
    int n;
    cout<<"Enter Number"<<endl;
    cin>>n;

    string str[10] = {"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};

    cout<<"Answer :";
    printspell(n,str);
    return 0;
}