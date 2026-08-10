#include "MathFunctions.h"
#include<cmath>


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

double Power(double a, double b) {
    return std::pow(a, b);
}

std::optional<double> Root(double a, int n) {
    if (n == 0 || (a == 0 && n < 0) || a < 0 && n % 2 == 0) {
        return std::nullopt;
    }
    double b = 1.0 / n;
    if (a < 0) {
        return -std::pow(-a, b);
    }
    return std::pow(a, b);
}

double AbsoluteValue(double a) {
    if (a < 0) {
        return -a;
    }
    return a;
}