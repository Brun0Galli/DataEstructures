//
// Created by bruni on 28/02/2024.
//
#include <iostream>
#include "Stack.h"
int main() {
    Stack Construction;
    int opcion,validation;
    employees a, value;
    do {
        cout<<"Menu"<<endl;
        cout<<"1. Push"<<endl;
        cout<<"2. Pop"<<endl;
        cout<<"3. Peek"<<endl;
        cout<<"4. Display"<<endl;
        cout<<"5. Exit"<<endl;
        cout<<"Choose an option: ";
        cin>>opcion;
        switch(opcion) {
            case 1:

                cout<<"Enter the ID of the employee : ";
                cin>>a.id;
                cout<<"Enter the name of the employee : ";
                cin>>a.name;
                cout<<"Enter the salary of the employee : ";
                cin>>a.salary;
                Construction.push(a);
                break;
            case 2:
                value=Construction.pop();
                if(validation!=-1) {
                    cout<<"The values for employee "<<value.id <<" was removed from original"<<endl;
                }
                break;
            case 3:
                value=Construction.peek();
                cout<< "The top element is: "<<value<<endl;

                break;
            case 4:
                cout<<"The Construction stack is: ";
                Construction.display();

                break;
            case 5:
                cout<<"Exiting..."<<endl;

                break;
            default:
                cout<<"Invalid option"<<endl;
        }
    }while(opcion!=5);

    return 0;
}
