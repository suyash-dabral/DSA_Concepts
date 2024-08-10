#include<bits/stdc++.h>
using namespace std;

class stack{
    int *arr;
    int top;
    int size;
    stack(int size){
        this->size=size;
        arr=new int[size];
        top=-1;
    }
    void push(int data){
        if(size-top>1){
            top++;
            arr[top]=data;
        }
        else{
            cout<<" Stack overflow ";
        }
    }
    void pop(){
        if(top>=0){
            top--;
        }
        else{
            cout<<" Stack underflow";
        }
    }
    int peek(){
        if(top>=0 && top<size){
            return arr[top];
        }
        else{
            cout<<" Stack is empty ";
            return -1;
        }
    }
    bool isEmpty(){
        if(top==1){
            return true;
        }
        return false;
    }

};

main(){
    stack st(5);
    st.push(3);
    isEmpty(st);



}