//
// Created by bruni on 28/02/2024.
//
#include "DinamicStack.h"
int main()
{
    DinamicStack miPila;
    int opc, retorno, nuevo;

    setlocale(LC_ALL, "");
    do
    {
        cout << "\n1 Insertar  2 Extraer  3 Consultar"
            << "  4 Mostrar  5 Salir: ";
        cin >> opc;

        switch (opc)
        {
            case 1:
                cout << "\tQué número insertas: ";
            cin >> nuevo;
            miPila.push(nuevo);
            cout << "\n\tOK. se insertó correctamente" << endl;
            break;
            case 2:
                retorno = miPila.pop();
            if (retorno == -1)
                cout << "\n\tPila Vacía. NO se extrajo nada" << endl;
            else
                cout << "\n\tSe extrajo el entero: " << retorno << endl;
            break;
            case 3:
                retorno = miPila.peek();
            if (retorno == -1)
                cout << "\n\tPila Vacía." << endl;
            else
                cout << "\n\tPróximo a extraer: " << retorno << endl;
            break;
            case 4:
                miPila.display();
            break;
            case 5:
                cout << "\n\n\t\t\t--- FINAL DE LA APLICACIÓN ---\n" << endl;
            break;
            default:
                cout << "\n\tERROR, opción INVÁLIDA" << endl;
            break;
        }
    } while (opc != 5);
}