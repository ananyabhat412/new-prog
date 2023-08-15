#include <iostream>
using namespace std;
int main() {
    int size;
    cout << "Enter the size of the pattern: ";
    cin >> size;
    if (size <= 0)
     {
        cout << "Please enter a positive integer." <<endl; 
    }
    char currentchar = 'A';
    for (int x = 1; x <= size; ++x) {
        for (int y = 1; y <= x; ++y) {
            cout << currentchar;
            if (currentchar == 'Z') {
                currentchar = 'A';
            } else {
                currentchar++;
            }
        }
       cout <<endl;
    }
    return 0;
}
