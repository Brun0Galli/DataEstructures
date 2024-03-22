//
// Created by bruni on 12/03/2024.
//

#include "ColasFrases.h"
ColaFrases::ColaFrases() {
    inicio = NULL;
    final = NULL;
}


string ColaFrases::Extraer() {
    string fraseExtraida;

    if(inicio== NULL)
        return "";
    nodo= inicio;
    fraseExtraida= nodo->dato;
    inicio= inicio->siguiente;
    if(inicio == NULL)
        final = NULL;
    delete nodo;

    return fraseExtraida;
}

void ColaFrases::Insertar(string nueva) {
    nodo = new Frase();
    nodo->dato = nueva;
    nodo->siguiente = NULL;
    if(final == NULL) {
        inicio = nodo;
    } else {
        final->siguiente = nodo;
    }
    final = nodo;
}

void ColaFrases::show() {
    nodo = inicio;
    if (nodo == NULL) {
        cout<<"La cola esta vacia"<<endl;
    }
    while(nodo != NULL) {
        cout<<nodo->dato<<endl;
        nodo = nodo->siguiente;

    }
}