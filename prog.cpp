#include<iostream>
#include "Calculator.h"
#include <conio.h>
using namespace std;

int main() {
    Calculator calc;
    char operation;
    double num1, num2;

    do {
        system("cls");
        cout << "\tMENU:\n";
        cout << "1 - Addition\n";
        cout << "2 - Subtraction\n";
        cout << "3 - Multiplication\n";
        cout << "4 - Division\n";
        cout << "\tEsc - Exit\n";

        operation = _getch();

        if (operation >= '1' && operation <= '4') {
            cout << "Enter first number: ";
            cin >> num1;
            cout << "Enter second number: ";
            cin >> num2;

    }
   
} 
    while (operation != 27);

return 0;