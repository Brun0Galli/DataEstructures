//
// Created by bruni on 12/03/2024.
//
#include "Queue.h"



int main() {
    Cola cola;
    string a;
    for (int i = 0; i < 5; i++) {
        cout << "Ingrese una palabra: ";
        cin >> a;
        cola.insertar(a);
        cola.mostrar();
    }
    cola.mostrar();
    cola.mostrarParametros();

    cout << "Palabra extraida: " << cola.extraer() << endl;

    cola.mostrar();
    cola.mostrarParametros();

    return 0;
}
