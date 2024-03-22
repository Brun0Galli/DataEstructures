//
// Created by bruni on 12/03/2024.
//

#include "ColaTurnos.h"

ColaTurnos::ColaTurnos(string nom) {
    setlocale(LC_ALL,"");
    inicio = fin = NULL;
    nomCaja = nom;
}
void ColaTurnos::insertar(string turno) {
    nodo = new Nodo;
    nodo->palabra = turno;
    nodo->siguiente = NULL;
    if(inicio == NULL)
        inicio = nodo;
    if(fin != NULL)
        fin->siguiente = nodo;
    fin = nodo;
}

string ColaTurnos::extraer() {
    string turnoExtraido;

    if(inicio == NULL)
        return "";
    nodo = inicio;
    turnoExtraido = nodo->palabra;
    inicio = inicio->siguiente;
    if(inicio == NULL)
        fin = NULL;
    delete nodo;

    return turnoExtraido;
}

void ColaTurnos::mostrar() {
    if (inicio == NULL) {
        cout << "Cola vacia" << endl;
    }
    nodo = inicio;
    cout << "\nCaja " << nomCaja << endl;
    while (nodo != NULL)
    {
        cout << "\t" << nodo->palabra << endl;
        nodo = nodo->siguiente;
    }
}

