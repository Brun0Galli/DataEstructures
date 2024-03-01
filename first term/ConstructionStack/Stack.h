//
// Created by bruni on 28/02/2024.
//

#ifndef STACK_H
#define STACK_H
#pragma once
#include <iostream>
#include <string>
using namespace std;
#endif //STACK_H


struct employees {
    int id;
    string name;
    int salary;
    employees* previous;
    friend std::ostream& operator<<(std::ostream& os, const employees& emp);
};
class Stack {
public:
    Stack();
    employees peek();
    employees pop();
    void push(employees);
    void display();
private:
    employees* top,*node;
};