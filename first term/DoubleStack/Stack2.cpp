//
// Created by bruni on 28/02/2024.
//
#include "Stack.h"

Stack::Stack() {
    top = nullptr;
}
bool Stack::isEmpty() {
    return top == nullptr;
}
bool Stack::isFull() {
    return top == array + MAX-1;
}
void Stack::push(int value) {
  if(!isFull()) {
      if(isEmpty()) {
          top = array;
      }else {
          top++;
      }
      *top=value;
  }else {
      cout<<"The Stack is full"<<endl;
  }
}
int Stack::pop() {
    if(!isEmpty()) {
        int value = *top;
        if(top==array) {
            top = nullptr;
        }else {
            top--;
        }
        return value;
    }else {
        cout<<"The Stack is empty"<<endl;
        return -1;
    }
}
void Stack::display() {
    if(isEmpty()) {
        cout<<"The Stack is empty \n"<<endl;
        return;
    }
    cout << "The Stack is: ";
    for(int*ptr= top;ptr >=array;ptr--) {
        cout<<*ptr<<" ";
    }
}
void Stack::peek() {
    if(!isEmpty()) {
        int value = *top;
        cout<<"The top value is: "<<value;
    }else {
        cout<<"The Stack is empty"<<endl;
    }
}

