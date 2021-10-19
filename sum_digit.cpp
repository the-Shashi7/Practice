#include<iostream>
using namespace std;

int main(){
int n, l;
int sum=0;

cin>>n;
while(n>0){

    l = n%10;

    sum= sum+l;

    n= n/10;
}
 cout<<"Sum of digits is "<<sum<<endl;

return 0;
}
