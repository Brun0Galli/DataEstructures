//
// Created by bruni on 12/03/2024.
//

#ifndef QUEUE_H
#define QUEUE_H
#include <iostream>
#include <string>

using namespace std;
const int MAX_SIZE = 100;
#endif //QUEUE_H


class Cola {
private:
    string arreglo[MAX_SIZE];
    int frente;
    int fin;
    int num_elementos;

public:
    Cola();

    bool estaVacia();

    bool estaLlena();

    void insertar(string palabra);

    string extraer();

    void mostrar();

    void mostrarParametros();
};
