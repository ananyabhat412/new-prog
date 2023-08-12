#include <iostream>

double calculateTotalCost(double price, int quantity) {
    double totalCost = price * quantity;
    return totalCost;
}

int main() {
    double itemPrice;
    int itemQuantity;

    std::cout << "Enter the price of the item: ";
    std::cin >> itemPrice;
    
    std::cout << "Enter the quantity of items: ";
    std::cin >> itemQuantity;
    
    if (itemPrice < 0 || itemQuantity < 0) {
        std::cout << "Price and quantity must be non-negative." << std::endl;
    } else {
        double total = calculateTotalCost(itemPrice, itemQuantity);
        std::cout << "The total cost of purchasing " << itemQuantity << " items at $" << itemPrice << " each is $" << total << std::endl;
    }
    
    return 0;
}
