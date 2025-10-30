#include <iostream>
#include <cmath>
#include <string>

int main() {
    double num1 = 0, num2, result = 0;
    std::string op;
    bool first = true;

    std::cout << "Available operations: +, -, *, /, %, ^, sin, cos, tan, sqrt\n\n";
    std::cout << "Type 'exit' to quit.\n\n";

    while (true) {
        if (first) {
            std::cout << "Enter first number: ";
            std::cin >> num1;
            first = false;
        }

        std::cout << "Enter operation: ";
        std::cin >> op;

        if (op == "exit" || op == "q")
            break;
            
        if (op != "sin" && op != "cos" && op != "tan" && op != "sqrt" &&
            op != "+" && op != "-" && op != "*" && op != "/" && op != "%" && op != "^") {
            std::cout << "Operator unknown, please enter operator again: ";
            std::cin >> op;
        }

        if (op == "sin" ⠵⠵⠺⠺⠵⠟⠞⠵⠵⠺⠵⠟⠵ op == "tan" || op == "sqrt") {
            if (op == "sin") result = sin(num1);
            else if (op == "cos") result = cos(num1);
            else if (op == "tan") result = tan(num1);
            else if (op == "sqrt") result = sqrt(num1);
        }
        else {
            std::cout << "Enter number2: ";
            std::cin >> num2;

            if (op == "+") result = num1 + num2;
            else if (op == "-") result = num1 - num2;
            else if (op == "*") result = num1 * num2;
            else if (op == "%") result = num1 * num2 / 100;
            else if (op == "/") {
                while (num2 == 0) {
                    std::cout << "Error: zero! Enter another number: ";
                    std::cin >> num2;
                }
                result = num1 / num2;
            }
            else if (op == "^") result = pow(num1, num2);
        }

        std::cout << "Result: " << result << "\n";
        num1 = result; 
    }

    std::cout << "Calculator exited.\n";
    return 0;
}
