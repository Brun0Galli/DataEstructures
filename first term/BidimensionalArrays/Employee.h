
// Created by bruni on 24/02/2024.
//

#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#pragma once
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

#endif //EMPLOYEE_H

class EmployeeRecords{
public:
    EmployeeRecords();
    ~EmployeeRecords();
    void Show();
    void Order();
    void Fill();

private:
    struct Employee{
        string name;
        int antiquity;
        int *Soldpieces;
    };
    int employees;
    Employee **val;
};
