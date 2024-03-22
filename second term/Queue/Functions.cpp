//
// Created by bruni on 12/03/2024.
//

#include "Queue.h"


Cola::Cola() {
    frente = 0;
    fin = -1;
    num_elementos = 0;
}

bool Cola::estaVacia() {
    return num_elementos == 0;
}

bool Cola::estaLlena() {
    return num_elementos == MAX_SIZE;
}

void Cola::insertar(string palabra) {
    if (!estaLlena()) {
        fin = (fin + 1) % MAX_SIZE;
        arreglo[fin] = palabra;
        num_elementos++;
        cout << "Palabra \"" << palabra << "\" insertada correctamente.\n";
    } else {
        cout << "La cola está llena. No se puede insertar más palabras.\n";
    }
}

string Cola::extraer() {
    if (!estaVacia()) {
        string palabra = arreglo[frente];
        frente = (frente + 1) % MAX_SIZE;
        num_elementos--;
        return palabra;
    } else {
        cout << "La cola está vacía. No se puede extraer ninguna palabra.\n";
        return "";
    }
}

void Cola::mostrar() {
    cout << "Contenido de la cola:\n";
    if (!estaVacia()) {
        int i = frente;
        do {
            cout << arreglo[i] << " ";
            i = (i + 1) % MAX_SIZE;
        } while (i != (fin + 1) % MAX_SIZE);
        cout << endl;
    } else {
        cout << "La cola está vacía.\n";
    }
}

void Cola::mostrarParametros() {
    cout << "Parametros de la cola:\n";
    cout << "Tamanioo maximo: " << MAX_SIZE << endl;
    cout << "Numero de elementos: " << num_elementos << endl;
    cout << "Frente: " << frente << endl;
    cout << "Fin: " << fin << endl;
}

