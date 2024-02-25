//
// Created by bruni on 24/02/2024.
//
#include "Employee.h"

EmployeeRecords::EmployeeRecords() {
    employees=0;
    val = nullptr;

}
EmployeeRecords::~EmployeeRecords() {
    for (int i = 0; i < employees; ++i) {
        delete[] val[i]->Soldpieces;
        delete val[i];
    }
    delete[] val;
}
void EmployeeRecords::Fill() {
    cout << "Enter number of employees: ";
    cin >> employees;
    cin.ignore();
    val = new Employee*[employees];

    for (int i = 0; i < employees; ++i) {
        val[i] = new Employee;
        cout << "Enter name of employee " << i + 1 << ": ";
        getline(cin, val[i]->name);
        cout << "Enter antiquity of employee " << i + 1 << "(in years) : ";
        cin >> val[i]->antiquity;
        val[i]->Soldpieces = new int[3];
        cout << "Enter number of pieces sold in the last three months for employee " << i + 1 << ": \n";
        for (int j = 0; j < 3; ++j) {
            cout<< "Month " << j+1 << ": ";
            cin >> val[i]->Soldpieces[j];
        }
        cin.ignore();
    }
}
void EmployeeRecords::Order() {
    for (int i = 0; i < employees - 1; ++i) {
        for (int j = 0; j < employees - i - 1; ++j) {
            if (val[j]->antiquity > val[j + 1]->antiquity) {
                swap(val[j], val[j + 1]);
            }
        }
    }
}

void EmployeeRecords::Show() {
    cout << "The employees are: \n"<< endl;
    for (int i = 0; i < employees; ++i) {
        cout << "Name: " << val[i]->name <<"\t||\t" << "Antiquity: " << val[i]->antiquity<<endl;
        cout << "Pieces sold in the last three months: ";
        cout<< "[";
        for (int j = 0; j < 3; ++j) {
            cout <<val[i]->Soldpieces[j] << ", ";
        }
        cout<<"]" << endl;
    }

}

