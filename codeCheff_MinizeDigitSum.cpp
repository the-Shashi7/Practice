#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--){
        int n,l,r;
        cin>>n>>l>>r;
        int Min_sum,sum,x;
            Min_sum = n;
        for (int i = l; i <= r; i++){
            sum = 0 , x=n ;
            while (x > 0){
                if(x%i > 0){
                    sum= sum + (x%i);
                    }
                    x = x/i;   
                }
            if(sum==1){
                Min_sum =i;
                break;
            }else if (sum< Min_sum){
                Min_sum = i;
            }
        }
         cout<<Min_sum<<endl;
    }
    
}