//
// Created by bruni on 28/02/2024.
//

#ifndef STACK_H
#define STACK_H
#pragma once
#include <iostream>
using namespace std;
#endif //STACK_H
const int MAX=10;


class Stack {
public:
    Stack();

    int pop();
    void push(int);
    void display();
    bool isEmpty();
    bool isFull();
    void peek();
private:
    int array[MAX];
    int* top;
};