#include <iostream>
using namespace std;
#define size 4
int CQ[size];
int front = -1;
int rear = -1;
bool isfull(){
    return (rear+1)%size == front;
}
bool isEmpty(){
    return front ==-1;
}
void enqueue(int num){
    if (isfull()){
        cout<<"queue is full can not insert"<<endl;
    }
   else if (isEmpty()){
        front = rear = 0;
        CQ[rear] = num;
        cout<<num<<"\tinserted"<<endl;
    }
    else{
        rear =(rear+1)%size;
        CQ[rear] = num;
        cout<<num<<"\tinserted"<<endl;
    }
}
void dequeue(){
    if (isEmpty()){
        cout<<"queue is empty can not reomve"<<endl;
    }
    else if(front==rear){
        cout<<CQ[front]<<"\tremove"<<endl;
        front = rear =-1;
    }
    else{
        cout<<CQ[front]<<"\tremoved"<<endl;
        front=(front+1)%size;
    }
}
void display(){
    if (isEmpty()){
        cout<<"queue is empty can not display"<<endl;
    }
    else{
        for(int i= front; i!=rear; i= (i+1)%size){
            cout<<CQ[i]<<" ";
        }
        cout<<CQ[rear];
}
}
 int main() {
        enqueue(10);
        enqueue(20);
        enqueue(30);
        enqueue(40);
        enqueue(50);
        dequeue();
        dequeue();
        display();
    }
