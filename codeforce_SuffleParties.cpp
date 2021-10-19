#include<iostream>
using namespace std;

int main(){
    int t;cin>>t;
    while (t--)
    {   int aeven=0, aodd=0;
        int n,x; cin>>n;
        for(int i=0; i<n;i++){
            cin>>x;
            if(x%2==0){
                aeven++;
            }else{
                aodd++;
            }
        }
        int odd = n/2;
        int even = n/2;
        
        if(n%2==1){
            odd++;
        }
        cout<<min(odd,aeven)+ min(even,aodd)<<endl;
    }
    
}