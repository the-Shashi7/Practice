#include<iostream>
#include<climits>
using namespace std;

class StackUsingArray{
    private: int * data;
             int nextIndex;
             int capacity = 4;
    public:
        StackUsingArray(int totalsize){
            data = new int[4];
            nextIndex = 0;
            capacity = 4;
        }

    int size(){
        return nextIndex ;
        }
    int isEmpty(){

        return nextIndex == 0;
    }
    int push(int element){
        if(nextIndex==capacity){
            int *newData = new int[2*capacity];
            for (int i = 0; i <capacity ; i++){
                newData[i]= data[i];
            }
            capacity*=2;
            delete []data;
            data= newData;
            

        }
        data[nextIndex]=element;
        nextIndex++;
    }

    int pop(){
        if (nextIndex == 0){
            cout<<"STACK ID EMPYT"<<endl;
        }
        nextIndex--;
        return data[nextIndex];
    }

    int top(){
        if (isEmpty())
        {
            cout<<"STACK IS EMPTY"<<endl;
            return INT_MIN;
        }

        return data[nextIndex-1];
    }
};

int main(){
    StackUsingArray s(4);
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    cout<<"SIZE OF STACK IS                       : "<<s.size()<<endl;
    cout<<"THE TOP ELEMENT OF STACK IS            : "<<s.top()<<endl;
    cout<<"THE ELEMENT WHICH WE POPED IS          : "<<s.pop()<<endl;
    cout<<"SIZE OF STACK AFTER POPED              : "<<s.size()<<endl;
    cout<<"AFTER POPED THE TOP ELEMENT IS         : "<<s.top()<<endl;
    cout<<"IF STACK IS EMPTY YES= 1 OR NO =0 THEN : "<<s.isEmpty()<<endl;
    cout<<"END SIZE OF STACK AFTER POPED          : "<<s.size()<<endl;
}