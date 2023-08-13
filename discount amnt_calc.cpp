#include <iostream>
using namespace std;
int main() {

    double initialprice, discountpercent;

   
    cout << "Enter initial price in rupees): ";
    cin >> initialprice;

    cout << "Enter discount percentage: ";
    cin >> discountpercent;

    double discountamount = (discountpercent / 100) * initialprice;
    double finalprice = initialprice - discountamount;

    std::cout << "Initial Price: Rs" << initialprice;
    std::cout << "Discount Amount: Rs" << discountamount;
    std::cout << "Final Price: Rs" << finalprice;

    return 0;
}
