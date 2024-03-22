//
// Created by bruni on 12/03/2024.
//

#include "CircularQueue.h"

ColaCircular::ColaCircular() {
    min= 0;
    max = MAX_SIZE- 1;
    incio = fin =-1;
    palabras = new string[MAX_SIZE];
    for(int i = min; i <= max; i++){
        palabras[i] = "";
    }
}
int ColaCircular::insertar(string palabra) {
    if(incio==-1&& fin == - 1){
        return -1;
    }


}
string ColaCircular::extraer(string palabra) {
    if(incio == -1){
        cout << "Cola vacia" << endl;
        return "";
    }
    string temp = palabras[incio];
    palabras[incio] = "";
    if(incio == fin){
        incio = -1;
        fin = -1;
    }else if(incio == max){
        incio = min;
    }else{
        incio++;
    }
    return temp;
}
void ColaCircular::mostrar() {
        cout<<"\nPalabras:"<<endl;
        for (int i = min; i<=max; i++){
            cout <<"\t"<< palabras[i];
            if(i == min) cout << "\t<- inicio";
            if(i ==max )cout << "\t<- max";
            if(i==incio) cout << "\t<- inicio";
            if(i == fin) cout << "\t<- fin";
            cout << endl;
        }
    }

