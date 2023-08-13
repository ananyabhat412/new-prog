
#include <iostream>
using namespace std;
int main() {
    char languagecode;

   cout << "Language Greeting Program" <<endl;
   cout << "Available language codes: e (english), h (hindi), t (tamil), s (spanish)" <<endl;
   cout << "Enter a language code: ";
   cin >> languagecode;

    switch (languagecode) {
        case 'e':
            cout << "Hello!" <<endl;
            break;
        case 'h':
            cout << "Namaste!" <<endl;
            break;
        case 't':
            cout << "Vanakkam!" <<endl;
            break;
        case 's':
            cout << "hola!" <<endl;
            break;
        default:
            cout << "Sorry, the provided language code is not supported." << endl;
            break;
    }

    return 0;
}

