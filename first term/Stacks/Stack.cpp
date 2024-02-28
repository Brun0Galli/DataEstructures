//
// Created by bruni on 27/02/2024.
//

#include "Source1.h"

int main() {
    ScreenStack screen_stack;
    int option;
    string temp;
    do {
        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Display" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter an option: ";
        cin >> option;
        switch (option) {
            case 1:
                screen_stack.push();
                break;
            case 2:
                temp = screen_stack.pop();
                if (temp != "") {
                    cout << "Popped string: " << temp << endl;
                }
                break;
            case 3:
                screen_stack.display();
                break;
            case 4:
                cout << "Exiting" << endl;
                break;
            default:
                cout << "Invalid option" << endl;
        }
    } while (option != 4);



    return 0;
}
