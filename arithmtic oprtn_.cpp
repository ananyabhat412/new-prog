#include <iostream>
using namespace std;
int main() {
    double number1, number2;
    char operation;

    cout << "Enter first number: ";
    cin >> number1;
    cout << "Enter operator (+, -, *, /): ";
    cin >> operation;
    cout << "Enter second number: ";
    cin >> number2;

    double result;

    switch (operation) {
        case '+':
            result = number1 + number2;
            break;
        case '-':
            result = number1 - number2;
            break;
        case '*':
            result = number1 * number2;
            break;
        case '/':
            if (number2 != 0) {
                result = number1 / number2;
            } else {
                std::cout << "Error: Division by zero is not allowed." <<endl;
              
            }
            break;
        cout << "Error: Invalid operator." <<endl;
    }

   cout << "Result: " << result <<endl;

    return 0;
}







