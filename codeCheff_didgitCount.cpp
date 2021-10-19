#include <iostream>
using namespace std;

int main() {
	int a,t;
    cin>>t;
    while (t--){
        int ans = 0;
        cin>>a;
        while (a!=0){
            if (a%10==4){
                ans++;
                a=a/10;
            }else{
                a=a/10;
                }
        }
    cout<<ans<<endl;
    }
     
	return 0;
}
