#include<iostream>
using namespace std;

int main(){
  int a[10]= {1,2,3};

  for(int i=0; i<10; i++){
    cout<<a[i]<<",";
  }
  cout<<endl;
  cout<<"Size of Arrays a is "<<sizeof(a)<<endl;
  int n = sizeof(a)/sizeof(int);
  cout<<"number of elements is "<<n<<endl;
   return 0;
}
