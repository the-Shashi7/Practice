#include<iostream>
using namespace std;

class Diagonal
{
private:
    int *A;
    int n;
public:
    Diagonal(int n){
        this->n = n;
        A = new int[n];
    };
    ~Diagonal(){ delete []A ; }

    void Set(int i, int j, int x);
    void Get(int i, int j);
    void Display();
};

void Diagonal::Set(int i, int j , int x){
    if (i==j) A[i-1] = x;
}

void Diagonal::Get(int i , int j){
    if (i==j)  cout<<A[i-1];
    else cout<<0;
}

void Diagonal::Display(){
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i==j)
            {   
                cout<<A[i-1]<<" ";
            }
            else cout<<"0 ";
        }
        cout<<endl;
    }
}

int main(){
    Diagonal d(4);
    d.Set(1,1,3);
    d.Set(2,2,6);
    d.Set(3,3,9);
    d.Set(4,4,12);
    d.Display();
    d.Get(1,2);
    return 0;
}
