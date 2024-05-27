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
    }
    while (operation != 27);

    return 0;
}