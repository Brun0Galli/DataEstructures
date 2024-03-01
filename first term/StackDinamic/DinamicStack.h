//
// Created by bruni on 28/02/2024.
//

#ifndef DINAMICSTACK_H
#define DINAMICSTACK_H
#pragma once
#include <iostream>
using namespace std;
#endif //DINAMICSTACK_H
struct INT {
    int data;
    INT* previous;
};
class DinamicStack {
public:
    DinamicStack();
    int pop();
    int peek();
    void push(int);
    void display();
private:
    INT* top,*node;
};