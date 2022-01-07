#include<bits/stdc++.h>
using namespace std;

int main(){
int t; cin>>t;
while (t--){
    int n,k;
    cin>>n; int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"The unique elements of array are : ";
    
    for (int i = 0; i < n; i++){
        for (int j = i+1; j < n; j++){
            if(arr[i] == arr[j]){
                 k = arr[i];
            cout<<k<<" ";
            }
        }
    }
    cout<<endl;
  }   
}