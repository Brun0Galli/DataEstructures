//
// Created by bruni on 12/03/2024.
//

#ifndef QUEUE_H
#define QUEUE_H
#include <iostream>
#include <string>

using namespace std;
const int MAX_SIZE = 4;
#endif //QUEUE_H

struct Buyer {
    string name;
    int ticketnumber;
};
class Cola{
public:
    Cola();
    int insert(const Buyer& buyer);
    Buyer extract();
    void show() const;
    bool isEmpty() const;
    bool isFull() const;
    Buyer getFront() const;
    void Discount();
private:
    Buyer elements[MAX_SIZE];
    int min, max, front, rear;
};
