#include <iostream>

#ifdef _WIN32
    #include <Windows.h>
#endif

int main() {
    double num1, num2;
    char op;

    std::cout << "Welcome to Calculator" << std::endl;
    std::cout << "Enter the first number: ";
    std::cin >> num1;

    std::cout << "Enter the operation (+, -, *, /): ";
    std::cin >> op;

    std::cout << "Enter the second number: ";
    std::cin >> num2;

    double result = 0;

    switch (op) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                std::cout << "Error: Cannot divide by zero." << std::endl;
                return 1;
            }
            break;
        default:
            std::cout << "Error: Invalid operation." << std::endl;
            return 1;
    }

    std::cout << "Result: " << result << std::endl;

    #ifdef _WIN32
        system("pause");
    #else
        std::cout << "Press enter to exit...";
        std::cin.ignore();
        std::cin.get();
    #endif

    return 0;
}
