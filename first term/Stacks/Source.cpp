//
// Created by bruni on 27/02/2024.
//

#include "Source1.h"

ScreenStack::ScreenStack() {
    top1 = -1;
}
void ScreenStack::push() {
    if (isFull()) {
        cout << "Stack is full" << endl;
    } else {
        string temp;
        for(int i = 0; i < TAM; i++) {
            cout << "Enter a string: ";
            cin >> temp;
            top1++;
            stack[top1] = temp;
        }
    }
}
string ScreenStack::pop() {
    if (isEmpty()) {
        cout << "Stack is empty" << endl;
        return "";
    } else {
        string temp = stack[top1];
        top1--;
        return temp;
    }
}
void ScreenStack::display() {
    for (int i = top1; i >= 0; i--) {
        cout << stack[i] << endl;
    }
}
bool ScreenStack::isEmpty() const {
    return top1 == -1;
}
bool ScreenStack::isFull() const {
    return top1 == TAM - 1;
}


