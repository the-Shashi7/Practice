#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n, target;
    cin>>n;
    int nums[n];
    for(int i=0; i<=n; i++){
        cin>>nums[i];
        }
    cout<<"Enter Target Value"<<endl;
    cin>>target;
    for (int i=0; i <= sizeof(nums)/sizeof(int); i++){
        
        for (int j=i+1; j <= sizeof(nums)/sizeof(int); j++){

            if ( (nums[i]+ nums[j]) == target){
                cout<<nums[i]<<"+"<<nums[j]<<" at "<<"{"<<i<<","<<j<<"} | ";
            }
            
        }
        
    }
    return 0;
}