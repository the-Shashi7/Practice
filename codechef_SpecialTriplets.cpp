#include<iostream>
using namespace std;

int main(){
    int N,testCase;
    cin>>testCase;
    while (testCase--){
        cin>>N;
        int j=0;
        for (int c = 1; c <=N; c++){
            for (int b = c; b <= N ; b = b+c){
                for (int a = c; a <= N; a=a+b){
                    if ((a%b == c) && (b%c == 0) ){
                            j++;
                    }
                }
            }
        }
        cout<<j<<endl;
    }
    return 0;
}