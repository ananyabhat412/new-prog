#include <iostream>

int main() {
    int totalDays;

    std::cout << "Enter the number of days: ";
    std::cin >> totalDays;

    if (totalDays < 0) {
        std::cout << "Please enter a non-negative number of days." << std::endl;
    } else {
        int years = totalDays / 365;
        int remainingDays = totalDays % 365;
        int months = remainingDays / 30;
        int days = remainingDays % 30;

        std::cout << totalDays << " days is equivalent to:" << std::endl;
        std::cout << "Years: " << years << std::endl;
        std::cout << "Months: " << months << std::endl;
        std::cout << "Days: " << days << std::endl;
    }

    return 0;
}
