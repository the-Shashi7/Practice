#include <iostream>
using namespace std;

int main() {
	int a1,a2,a3,a4,testC;
	cin>>testC;
	while (testC--){
		cin>>a1>>a2>>a3>>a4;
		if (a1 != a2 && a3 !=a4)
		{
			cout<<2;
		}
		else if (a1 != a2 && a3 == a4 || a1 == a2 && a3 !=a4)
		{
			cout<<1;
		}
		else
		{
			cout<<0;
		}
	}	
	return 0;
}
