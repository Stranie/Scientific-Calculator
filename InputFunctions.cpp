#include "InputFunctions.h"
#include<iostream>

double GetValidNumber(std::string prompt) {
    std::string input;
    while(true) {
        std::cout << prompt;
        std::getline(std::cin, input);
        if (isDouble(input)) {
            return std::stod(input);
        }
        
        std::cout << "Invalid Number. Try Again!\n";
    }
}

int GetValidInteger(std::string prompt) {
    std::string input;
    while (true) {
        std::cout << prompt;
        std::getline(std::cin, input);
        if (isInteger(input)) {
            return StringToInteger(input);
        }
        std::cout << "Invalid Integer. Please Try Again!\n";
    }
}

void GetNumbers(double& a, double& b) {
    a = GetValidNumber("Enter First Number: ");
    b = GetValidNumber("Enter Second Number: ");
}

bool isInteger(std::string input) {
    if (input.empty()) {
        return false;
    }
    int i = 0;
    if (input[i] == '-' && input.size() > 1) {
        i++;
    }
    for (; i < input.size(); i++) {
        if (input[i] < '0' || input[i] > '9') {
            return false;
        }
    }
    return true;
}

int StringToInteger(std::string input) {
    int result = 0, i = 0;
    bool isNegative = false;
    if (input[i] == '-') {
        isNegative = true;
        i++;
    }
    for (; i < input.size(); i++) {
        result *= 10;
        result += (input[i] - '0');
    }
    if (isNegative) {
        result *= -1;
    }
    return result;
}

int GetChoice() {
    std::string input;
    std::getline(std::cin, input);
    
    int result;
    if (isInteger(input)) {
        result = StringToInteger(input);
    }
    else {
        result = -1;
    }

    return result;
}

bool isDouble(std::string input) {
    bool HasDecimal = false;
    bool HasDigit = false;
    
    if (input.empty()) {
        return false;
    }
    int i = 0;
    if (input[i] == '-' && input.size() > 1) {
        i++;
    }
    for (; i < input.size(); i++) {
        if (input[i] == '.') {
            if (HasDecimal == false) {
                HasDecimal = true;
            }
            else {
                return false;
            }
        }
        else if(input[i] < '0' || input[i] > '9') {
            return false;
        }
        else if(input[i] >= '0' && input[i] <= '9') {
            HasDigit = true;
        }
    }
    return HasDigit;
}