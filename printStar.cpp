#include<iostream>
using namespace std;

int main(){
    int col; cin>>col;
    for(int i=1; i<=col; i++){
        for(int j=col; j>=i; j--){
            cout<<" * ";
        }
        cout<<endl;
    }
}