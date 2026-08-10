#include "UI.h"
#include<iostream>

void DisplayMainMenu() {
    std::cout << "======= Scientific Calculator =========\n";
    std::cout << "1. Basic Operations\n";
    std::cout << "2. Powers & Roots\n";
    std::cout << "3. Trigonometry\n";
    std::cout << "0. Exit\n";
    std::cout << "Choose an option: ";
}

void DisplayBasicMenu() {
    std::cout << "=== Basic Operations ===\n";
    std::cout << "\n";
    std::cout << "1. Addition\n";
    std::cout << "2. Subtraction\n";
    std::cout << "3. Multiplication\n";
    std::cout << "4. Division\n";
    std::cout << "5. Absolute Value\n";
    std::cout << "0. Back\n";
    std::cout << "Choose an option: ";
}

void DisplayPowerRootMenu(){
    std::cout << "=== Powers and Roots ===\n";
    std::cout << "1. Power\n";
    std::cout << "2. Root\n";
    std::cout << "0. Back\n";
    std::cout << "Choose an option: ";
}

void DisplayTrigonometryMenu() {
    std::cout << "=== Trigonometry ===\n";
    std::cout << "\n";
    std::cout << "1. Sine\n";
    std::cout << "2. Cosine\n";
    std::cout << "3. Tangent\n";
    std::cout << "0. Back\n";
    std::cout << "Choose an option: ";
}