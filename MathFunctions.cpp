#include "MathFunctions.h"
#include<cmath>
#include<numbers>

constexpr double EPSILON = 1e-12;
double NormaliseResult(double a) {
    if (AbsoluteValue(a) < EPSILON) {
        a = 0;
    }
    return a;
}

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

double DegreestoRadians(double a) {
    return a * (std::numbers::pi / 180);
}

double Sine(double a) {
    double result;
    a = DegreestoRadians(a);
    result = std::sin(a);
    result = NormaliseResult(result);
    return result;
}

double Cosine(double a) {
    double result;
    a = DegreestoRadians(a);
    result = std::cos(a);
    result = NormaliseResult(result);
    return result;
}

std::optional<double> Tangent(double a) {
    a = DegreestoRadians(a);
    if (AbsoluteValue(std::cos(a)) < EPSILON) {
        return std::nullopt;
    }
    double result = std::tan(a);
    result = NormaliseResult(result);
    return result;
}

std::optional<double> NaturalLogarithm(double a) {
    if (a <= 0) {
        return std::nullopt;
    }
    return std::log(a);
}

std::optional<double> Logarithm(double a, double b) {
    if (a <= 0 || b <= 0 || b == 1) {
        return std::nullopt;
    }
    return std::log(a) / std::log(b);
}