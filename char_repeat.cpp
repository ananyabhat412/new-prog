
#include <iostream>
using namespace std;
int main() {
    char inputchar;
    int repeatcount;

    cout << "Enter a character: ";
    cin >> inputchar;

    cout << "Enter the number of times the charecter must be repeated: ";
    cin >> repeatcount;
    int count = 0;
    while (count < repeatcount) 
    {
        cout << inputchar;
        count++;
    }
    cout <<endl;
    return 0;
}

