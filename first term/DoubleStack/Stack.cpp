//
// Created by bruni on 28/02/2024.
//
#include <iostream>
#include "Stack.h"
int main() {
    Stack original, debugged;
    int opcion,value,minor;
    do {
        cout<<"Menu"<<endl;
        cout<<"1. Push"<<endl;
        cout<<"2. Pop"<<endl;
        cout<<"3. Peek"<<endl;
        cout<<"4. Display"<<endl;
        cout<<"5. Peek"<<endl;
        cout<<"6. Exit"<<endl;
        cout<<"Choose an option: ";
        cin>>opcion;
        switch(opcion) {
            case 1:
                cout<<"Enter the value in the original : ";
                cin>>value;
                original.push(value);
                break;
            case 2:
                value=original.pop();
                if(value!=-1) {
                    cout<<"The value "<<value<<" was removed from original"<<endl;
                }
                break;
            case 3:
                cout <<"Enter the value 'minor' to debug in the original: ";
                cin >> minor;
                while(!original.isEmpty()) {
                    value=original.pop();
                    if(value>=minor) {
                        debugged.push(value);
                    }
                }
                cout << "The original stack was debugged" << endl;
                break;
            case 4:
                cout<<"The original stack is: ";
                original.display();
                cout<<"The content of the debugged stack is: ";
                debugged.display();
                break;
            case 5:
                cout<<"See top element"<<endl;
                original.peek();
                break;
            case 6:
                cout<<"Exiting..."<<endl;

                break;
            default:
                cout<<"Invalid option"<<endl;
        }
    }while(opcion!=6);

    return 0;
}
