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


class ColaTurnos{

public:
    ColaTurnos(string);
    void insertar(string turno);
    string extraer();
    void mostrar();


private:
    struct Nodo {
        string palabra;
        Nodo* siguiente;
    };
    string nomCaja;
    Nodo* inicio;
    Nodo* fin;
    Nodo* nodo;
};
