#include <bits/stdc++.h>
using namespace std;
void matrix(int F[][5]){
    int i, j, k;
    for (k = 0; k < 5; k++){
        for (i = 0; i < 5; i++){
            for (j = 0; j < 5; j++){
                if ((F[i][k] * F[k][j] != 0) && (i != j)){
                    if ((F[i][k] + F[k][j] < F[i][j]) || (F[i][j] == 0)){
                        F[i][j] = F[i][k] + F[k][j];
                    }
                }
            }
        }
    }
    for (i = 0; i < 5; i++){
        cout<<endl;
        for (j = 0; j < 5; j++){
            cout<<F[i][j]<<"\t";
        }
    }
}
int main(){
        //Assume infinity as 0
    int F[5][5] = {{0, 5, 3, 0, 4},
           {0, 0, 7, 0, 5},
           {0, 0, 0, 1, 0},
           {8, 6, 0, 0, 2},
           {0, 0, 10, 0, 0}};
    matrix(F);
            
}
