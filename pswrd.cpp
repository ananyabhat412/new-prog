#include <iostream>
using namespace std;
int main() {
    const char correctpassword[] = "ananyabhat123";
    char userinput[100];
    bool loggedin = false;
    do {
        cout << "Enter the password: ";
        cin >> userinput;

       
        if ((userinput, correctpassword) == 0) {
            cout << "Welcome! You are now logged in." <<endl;
            loggedin = true;
        } else {
            cout << "Incorrect password. Please try again." <<endl;
        }
    } while (!loggedin);

    return 0;
}
