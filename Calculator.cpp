#include "Calculator.h"
#include <stdexcept>
using namespace std;

double Calculator::addition(double a, double b) {
    return a + b;
}

double Calculator::subtraction(double a, double b) {
    return a - b;
}

double Calculator::multiplication(double a, double b) {
    return a * b;
}
double Calculator::division(double a, double b) {
    if (b == 0) {
        throw invalid_argument("You cannot divide by 0");
    }
    return a / b;
}