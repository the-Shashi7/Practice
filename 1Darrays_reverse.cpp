#include<iostream>
#include<algorithm>
using namespace std;


void 1Darray_reverse(int a[i], int n){
    for(int i=0;i<n;i++){
        swap(a[i],a[n-i-1]);
    }
}

int main(){
    int i;
    int a[5]={1,2,3,4,5};
    for(int i=0;i<5;i++){
    cout<<a[i]<<endl;
    }
    cout<<1Darrays_reverse(i,n)<<endl;
}
