//
// Created by bruni on 28/02/2024.
//
#include "Stack.h"

Stack::Stack() {
    top = nullptr;
}


void Stack::push(employees a) {
    node = new employees();
    *node = a;
    node->previous = top;
    top = node;
}
employees Stack::pop() {
    employees *extracted;
    employees num;
    if(top ==nullptr) {
        return num;
    }
    extracted = top;
    top=extracted->previous;
    num=*extracted;
    delete extracted;
    return num;
}
void Stack::display() {
    employees *ptr;
    if(top == NULL) {
        cout<<"The Stack is empty"<<endl;
        return;
    }
    node = top;
    while(node!=NULL) {
        cout <<"ID"<< "\t" << "Name" << "\t" << "Salary" << "\t" << "Previous" << endl;
        cout<<node->id <<"\t"<<node->name<<"\t"<< node->salary<<"\t"<< node->previous;
        if(node == top) cout << "\t"<< "<== Top";
        cout<<endl;
        node = node->previous;
    }
}
employees Stack::peek() {
    employees num;
    if(top == nullptr) {
        return num;
    }
    return *top;
}

ostream& operator<<(std::ostream& os, const employees& emp) {
    os << "ID: " << emp.id << ", Name: " << emp.name << ", Salary: $" << emp.salary;
    return os;
}

