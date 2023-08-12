#include <iostream>

unsigned long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int num;

    std::cout << "Enter a positive integer: ";
    std::cin >> num;

    if (num < 0) {
        std::cout << "Please enter a positive integer." << std::endl;
    } else {
        unsigned long long result = factorial(num);
        std::cout << "Factorial of " << num << " is " << result << std::endl;
    }

    return 0;
}

