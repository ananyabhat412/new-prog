#include<iostream>
using namespace std;

int main() {
    int choice;
    double value, convertedvalue;

 cout<<"unit converter";
 cout<<"1.inches to cm"<<endl;
 cout<<"2.cm to inches"<<endl;
 cout<<"3.pounds to kg"<<endl;
 cout<<"4.kg to pounds"<<endl;
 cout<<"enter your choice 1/2/3/4"<<endl;

 cin>>choice;
 switch (choice) {
        case 1:
           cout << "Enter length in inches: ";
           cin >> value;
            convertedvalue = value * 2.54;
            cout << value << " inches is equal to " << convertedvalue << " cm";
            break;
        case 2:
           cout << "Enter length in cm: ";
            cin >> value;
            convertedvalue = value / 2.54;
            cout << value << " cm is equal to " << convertedvalue << " inches.";
            break;
        case 3:
            cout << "Enter weight in pounds: ";
            cin >> value;
            convertedvalue = value * 0.45;
            cout << value << " pounds is equal to " << convertedvalue << " kg.";
            break;
        case 4:
            cout << "Enter weight in kg: ";
            cin >> value;
            convertedvalue = value / 0.45;
            cout << value << " kg is equal to " << convertedvalue << " pounds.";
            break;
            default:
            cout << "Invalid choice. Please select 1, 2, 3, or 4." <<endl;
           
    return 0;
}
}


