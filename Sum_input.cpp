#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  int i, M;
  int sum =0;

  M = n*(n+1)/2;
  cout<<M<<endl;
  while(i<=n){
    sum = sum +i;
    i= i+1;
  }
  cout<<sum<<endl;
  return 0;
}
