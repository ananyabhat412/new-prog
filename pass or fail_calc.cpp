#include<iostream>
using namespace std;
int main(){
int marks;
   cout<<"enter marks obtained";
   cin>>marks;
   if( marks<0) {
        cout << "Invalid marks entered!";
    } else if (marks >= 90) {
        cout << "Distinction\n";
    } else if (marks >= 75) {
        cout << "First Class";
    } else if (marks >= 60) {
       cout << "Second Class";
    } else if (marks >= 40) {
     cout << "Passed" ;
    } else {
        cout << "Failed";
    }

    return 0;
}





