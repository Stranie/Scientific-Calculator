#pragma once
#include <optional>

double Addition(double a, double b);
double Subtraction(double a, double b);
double Multiplication(double a, double b);
std::optional<double> Division(double a, double b);
double Power(double a, double b);
std::optional<double> Root(double a, int n);
double AbsoluteValue(double a);
double DegreestoRadians(double a);
double Sine(double a);
double Cosine(double a);
std::optional<double> Tangent(double a);
std::optional<double> NaturalLogarithm(double a);
std::optional<double> Logarithm(double a, double b);

