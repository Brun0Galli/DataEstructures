//
// Created by bruni on 12/03/2024.
#include "Concert.h"



int main() {
    Cola cola;
    Buyer buyer;
  for(int i =0; i<MAX_SIZE;i++) {
      cout<<"Ingrese el nombre del comprador: ";
      cin.ignore();
      getline(cin,buyer.name);
      cout<<"Ingrese el numero de ticket: ";
      cin>>buyer.ticketnumber;
      cola.insert(buyer);
  }
    cola.show();
    cola.Discount();
}
