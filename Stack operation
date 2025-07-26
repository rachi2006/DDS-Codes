#include<iostream>
using namespace std;
#define size 4
int stack[size];
int top = -1;
void push(int num){
    if(top==size-1){
        cout<<"overflow"<<endl;
    }
    else{
        top++;
        stack[top]=num;
        cout<<num<<"\tinserted"<<endl;
    }
}
void pop(){
    if(top==-1){
cout<<"stack is uderflow can not remove element"<<endl;
    }
    else{
        cout<<stack[top]<<"\tremoved"<<endl;
        top--;
    }
}
void display(){
    if(top==-1){
        cout<<"stack is empty can not disply";
    }
    else{
        for (int i=top;i>=0;i--){
            cout<<stack[i]<<endl;
        }
    }
}
int main(){
    push(10);
    push(20);
    push(50);
    push(60);
    push(80);
    pop();
    display();
}
