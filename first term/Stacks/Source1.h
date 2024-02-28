//
// Created by bruni on 27/02/2024.
//

#ifndef SOURCE1_H
#define SOURCE1_H
#pragma once
#include <iostream>
#include <string>
using namespace std;
#endif //SOURCE1_H


const int TAM= 8;


class ScreenStack {
public:
    ScreenStack();
    void push();
    string pop();
    void display();
    bool isEmpty() const;
    bool isFull() const;
private:
    string stack[TAM];
    int top1;
};
