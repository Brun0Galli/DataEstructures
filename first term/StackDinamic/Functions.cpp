//
// Created by bruni on 28/02/2024.
//
#include "DinamicStack.h"
DinamicStack::DinamicStack() {
    top = NULL;
}
int DinamicStack::pop() {
   INT *extracted;
    int num;
    if(top ==NULL) {
        return -1;
    }
    extracted = top;
    top=extracted->previous;
    num=extracted->data;
    delete extracted;
    return num;
}
void DinamicStack::push(int value) {
    node = new INT;
    node->data = value;
    node->previous = top;
    top = node;
}
void DinamicStack::display() {
    INT *ptr;
    if(top == NULL) {
        cout<<"The Stack is empty"<<endl;
        return;
    }
    node = top;
    while(node!=NULL) {
        cout<<node->data<<"\t"<< node->previous;
       if(node == top) cout << "\t"<< "<== Top";
        cout<<endl;
        node = node->previous;
    }
}
int DinamicStack::peek() {
    if(top == NULL) {
        return -1;
    }
    return top->data;
}

