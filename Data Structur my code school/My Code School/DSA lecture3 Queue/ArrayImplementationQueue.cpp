#include<iostream>
using namespace std;

class Queue
{
    private:
        int A[10];
        int n = 10;
        int rear;
        int front;
    private:
        bool isFull(){
            // //Normal array case
            // if(rear == n-1){
            //     return true;
            // }
            //circular array 
            if((rear+1)%n == front) // front and rear index same 
            {
                return true;
            }
            return false;
        }
    public:
        Queue(){
            this->rear = -1;
            this->front = -1;
        }
        //IsEmpty
        bool IsEmpty(){
            if(front == -1 && rear == -1){
                return true;
            }
            return false;
        }
        //Enqueue insertion or inserting a value in a Queue
        void Enqueue(int data) {
            if(isFull()){
                cout << "Queue Full" <<endl;
                return;
            } else if(IsEmpty()){
                rear = 0;
                front = 0;
                A[rear] = data;
            } else {
                rear = (rear + 1)%n;
                A[rear] = data;
            }
        }
        //Dequeue
        void Dequeue(){
            if(IsEmpty()){
                cout << "Queue is empty"<<endl;
                return;
            } else if(front == rear){
                front = -1;
                rear = -1;
            } else {
                front = (front + 1)%n;
            }
        }
        //Front
        int Front() {
            if(IsEmpty()){
                cout << "Empty Queue"<<endl;
                return -1;
            }
            return A[front];
        }

        //print
        void print(){
            if(IsEmpty()){
                cout << "Queue is Empty"<<endl;
                return;
            }
            for(int i=front;i<=rear;i++){
                cout << A[i] << " ";
            }cout<<endl;
        }
};

int main(){
    Queue queue;
    queue.print();

    queue.Enqueue(10);
    queue.print();
    
    queue.Enqueue(15);
    queue.print();
    
    queue.Enqueue(17);
    queue.print();
    
    queue.Enqueue(19);
    queue.print();
    
    queue.Enqueue(90);
    queue.print();
    
    queue.Enqueue(19);
    queue.print();

    queue.Dequeue();
    queue.print();

    queue.Enqueue(12);
    queue.print();
    
    queue.Enqueue(100);
    queue.print();
    
    queue.Enqueue(90);
    queue.print();

    queue.Enqueue(1);
    queue.print();
    
    //queue full
    queue.Enqueue(78);
    queue.print();
    
    
    
    
    return 0;
}