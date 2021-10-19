#include<iostream>
using namespace std;
template<typename t>

class queueusingArray{
    t* data;
    int nextIndex;
    int firstIndex;
    int size;
    int capacity;

    public:
            queueusingArray(int s){
                data = new t[s];
                nextIndex = 0;
                firstIndex = -1;
                size = 0;
                capacity = s;
            }
        int getSize(){
            return size;
        }
        bool isEmpty(){
            return size == 0;
        }
        void enqueue(t element){
            if(size == capacity){
                cout<<"QUEQUE IS FULL"<<endl;
                return;
            }
            data[nextIndex] = element;
            nextIndex = (nextIndex+1)%capacity;
            if(firstIndex == -1){
                firstIndex = 0;
            }
            size++;
        }
        t front(){
        if (isEmpty()){
            cout<<"Queue is Empty !"<<endl;
            return 0;
        }
           return data[firstIndex];
        }
        t dequeue(){
            if(isEmpty()){
                cout<<"Queue is Empty"<<endl;
                return 0;
            }
            t ans = data[firstIndex];
            firstIndex = (firstIndex+1)%capacity;
            size--;
            if(size == 0){
                firstIndex = -1;
                nextIndex = 0;
            }
            return ans;
        }
};

int main(){
    queueusingArray<int> q(5);
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    q.enqueue(60);

    
    cout<<q.dequeue()<<endl;
    cout<<q.dequeue()<<endl;
    cout<<q.dequeue()<<endl;
    cout<<q.getSize()<<endl;
    cout<<q.isEmpty()<<endl;
    cout<<q.front()<<endl;
}