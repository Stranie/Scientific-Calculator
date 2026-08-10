#include "MathFunctions.h"


double Addition(double a, double b) {
    return a + b;
}

double Subtraction(double a, double b) {
    return a - b;
}

double Multiplication(double a, double b) {
    return a * b;
}

std::optional<double> Division(double a, double b) {
    if (b != 0) {
        return a / b;
    }
    else {
        return std::nullopt;
    }
}