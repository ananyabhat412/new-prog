#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    if (n <= 0) {
        cout << "Please enter a positive integer." <<endl;
    }
    int sum = 0;
    for (int i = 1; i <= n; ++i) {
        sum += i;
    }
    cout << "Sum of the series 1 + 2 + 3 + ... + " << n <<"is=:" << sum <<endl;
    return 0;
}

