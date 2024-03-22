//
// Created by bruni on 12/03/2024.
#include "CircularQueue.h"



int main() {
    ColaCircular C;
    C.mostrar();
    C.insertar("AA");
    C.insertar("BB");
    C.insertar("CC");
    C.mostrar();
    C.extraer("AA");
    C.mostrar();
    C.insertar("DD");
    C.insertar("EE");
    C.insertar("FF");
    C.mostrar();
    C.insertar("GG");
    C.insertar("HH");
    C.extraer("BB");
    C.extraer("CC");

    return 0;
}
