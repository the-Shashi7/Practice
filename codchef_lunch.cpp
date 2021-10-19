#include <iostream>
using namespace std;

int main() {
	int t, n, j;
	cin>>t;
	while(t--){
	    cin>>n;
	    int k = 0;
        int ans = 0;
	    for(int i = 1; i<=n ; i++){
	        j = i;
            k= k+i;

            if(k%2==0){
                ans = j;
            }
	    }
        cout<<ans<<" "<<k<<endl;
	}
	return 0;
}
