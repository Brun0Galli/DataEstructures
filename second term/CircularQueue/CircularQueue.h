//
// Created by bruni on 12/03/2024.
//

#ifndef QUEUE_H
#define QUEUE_H
#include <iostream>
#include <string>

using namespace std;
const int MAX_SIZE = 6;
#endif //QUEUE_H


class ColaCircular {

public:
    ColaCircular();
    int insertar(string palabra);
    string extraer(string palabra);
    void mostrar();


private:
   int min,max;
   int incio, fin;
   string* palabras;

};
