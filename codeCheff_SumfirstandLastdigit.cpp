#include <iostream>
using namespace std;

int main() {
	int T,n,a,l;
	cin>>T;
	while(T--){
	    cin>>n;
	    l = n%10;
        cout<<l<<endl;
        int x = 0;
	    do
          {    a=n;
              n=n/10;
          } while (n!=0);
          cout<<a<<endl;       
	}   
	return 0;
}
