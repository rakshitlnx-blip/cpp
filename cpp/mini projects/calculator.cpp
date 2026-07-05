#include <iostream>
#include <cmath>

int main() {
    char op;
    double num1;
    double num2;
    double result;

    std::cout << "Enter one of these signs (+, -, *, /): ";
    std::cin >> op;

    std::cout << "Enter 1st number: ";
    std::cin >> num1;

    std::cout << "Enter 2nd number: ";
    std::cin >> num2;

    switch (op) {

        case '+':
            result = num1 + num2;
            std::cout << "Result: " << result;
            break;

        case '-':
            result = num1 - num2;
            std::cout << "Result: " << result;
            break;

        case '*':
            result = num1 * num2;
            std::cout << "Result: " << result;
            break;

        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                std::cout << "Result: " << result;
            } else {
                std::cout << "Error! Division by zero is not allowed.";
            }
            break;

        default:
            std::cout << "Invalid operator!";
    }

    return 0;

    
}
