#include <iostream>
using namespace std;
int main() {
    char answer;
    cout << "What is the capital of INDIA?" <<endl;
    cout << "a) BIHAR" <<endl;
    cout << "b) DELHI" <<endl;
    cout << "c) GOA" << endl;
    cout << "d) BANGLORE" <<endl;

    cout << "Enter your answer (a/b/c/d): ";
    cin >> answer;
    switch (answer) {
        case 'a':
        case '1':
        case 'c':
        case '3':
        case 'd':
        case '4':
            cout << "Incorrect. Try again!" << endl;
            break;
        case 'b':
        case '2':
            cout << "Correct! DELHI is the capital of INDIA." <<endl;
            break;
        default:
           cout << "Invalid input." << endl;
    }
      return 0;
}
