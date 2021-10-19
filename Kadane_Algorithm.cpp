#include<iostream>
using namespace std;

int main(){

   int n;
   cin>>n;
   int arr[1000];
   int osum =0;
   int csum =0;
   for(int i=0; i<n; i++){
    cin>>arr[i];
   }

   for(int i=1;i<n; i++){
      if(csum>=0){
        csum+=arr[i];
      }else{
      csum= arr[i];}
      if(csum>osum){
        osum= csum;
      }
   }
    return osum;

}
