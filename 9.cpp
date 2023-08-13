#include <iostream>
using namespace std;
int main() {
    int num1, num2, num3, maxnumber;
    cout << "Enter num1: ";
    cin >>num1;
    cout<<"enter the num2:";
    cin>>num2;
    cout<<"enter num3:";
    cin>>num3;

    maxnumber = num1;

    if (num2 > maxnumber) {
        maxnumber = num2;
    }
    
    if (num3 > maxnumber) {
        maxnumber = num3;
    }

   cout << "The maximum number is: " << maxnumber;

    return 0;
}
