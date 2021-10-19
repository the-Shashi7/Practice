#include <iostream>
using namespace std;

int main() {
	int x,T;
	int r = 0, y=0; 
	cin>>T;
	while(T--){
        cin>>x;
	    while (x!=0)
        {
            r = x%10; x = x/10; y+=r;     
        }
       cout<<y<<endl; 
	}
	return 0;
}
