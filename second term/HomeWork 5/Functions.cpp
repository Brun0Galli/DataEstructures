//
// Created by bruni on 12/03/2024.
//

#include "Concert.h"

Cola::Cola() {
    min = 0;
    max = MAX_SIZE - 1;
    front = -1;
    rear = -1;
    for (int i = 0; i < max; i++) elements[i] = Buyer{"",0};
}

int Cola::insert(const Buyer &buyer) {
    if (rear == max)	// Fila llena
        return -1;
    rear++;
    if (front == -1) // Incrementa también 'principio' olamente en la primera inserción
        front++;
    /* Paso 3: Colocar información en 'final' */
    elements[rear] = buyer;
    return 0;
}

Buyer Cola::extract() {
    Buyer extracted;
    if (front ==-1 && rear ==-1)
        cerr<<"Queue Empty. Cant extract more elements"<<endl;
    if (front >rear)
        cerr << "Queue Empty. Cant extract more elements" << endl;
    extracted = elements[front];
    elements[front] = Buyer{"",0};
    front++;
    return extracted;
}

void Cola::show() const {
    cout << "Cola: \n";
    cout << "nombre" << " " << "\tticketnumber" << endl;
    for (int i = 0; i < MAX_SIZE; i++) {
        cout << elements[i].name << " \t"<< elements[i].ticketnumber << " \n";
        cout <<endl;
    }
}
void Cola::Discount() {
    int discountPosition = 1; // Contador para rastrear la posición en la cola
    int totalBuyers = (rear - front + MAX_SIZE) % MAX_SIZE + 1; // Contar la cantidad de compradores en la cola
    int extractedBuyers = 0; // Contador para rastrear cuántos compradores se han extraído
    Buyer buyers[totalBuyers]; // Arreglo para almacenar los compradores extraídos
    while (extractedBuyers < totalBuyers) {
        show();
        Buyer currentBuyer = extract(); // Extraer el comprador actual de la cola
        if (discountPosition % 2 == 0) {
            // El comprador actual está en una posición múltiplo de 5
            cout << "¡Felicidades " << currentBuyer.name << "! Ha ganado un vale de descuento del 50% para el siguiente concierto." << endl;
            cout << "Número de boleto: " << currentBuyer.ticketnumber << endl;
            for (int i = 0; i < totalBuyers; i++) {
                if (buyers[i].name == "") {
                    buyers[i] = currentBuyer; // Almacenar el comprador actual en el arreglo
                    break;
                }
            }
        }
        discountPosition++; // Incrementar la posición en la cola
        extractedBuyers++; // Incrementar el contador de compradores extraídos
    }
    show();
    cout << "Todos los compradores han sido atendidos." << endl;


    cout << "Los ganares de descuento son: " << endl;
    for (int i = 0; i < totalBuyers; i++) {
        if (buyers[i].name != "") {
            cout << "{" << buyers[i].name <<", " << buyers[i].ticketnumber << "}" << endl;

        }
    }

}
