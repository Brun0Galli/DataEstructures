//
// Created by bruni on 12/03/2024.
//

#ifndef QUEUE_H
#define QUEUE_H
#include <iostream>
#include <string>

using namespace std;

#endif //QUEUE_H


class ColaFrases {

public:
    string Extraer();
    void Insertar(string nueva);
    void show();
    ColaFrases();


private:
  struct Frase {
    string dato;
    Frase* siguiente;
  };
  Frase* inicio;
  Frase* final;
  Frase* nodo;


};
