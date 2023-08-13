#include<iostream>
using namespace std;
int main(){
    double weight, height;
    cout<<"enter the weight in kg";
    cin>>weight;
    cout<<"enter the height in meters";
    cin>>height;

      double bmi = weight / (height * height);
   char category='u';
   //u-underweight
   //n- normal
   //o- overweight
   //ob- obese
   
    if (bmi >= 18.5 and bmi < 25.0) {
        category = 'n';
    } else if (bmi >= 25.0 and bmi < 30.0) {
        category = 'o';
    } else if (bmi >= 30.0) {
        category = 'ob';
    }
 cout<<"your BMI is=:";
  if( category='n'){
    cout<<" normal";
  }
     else if( category='o'){
        cout<<"overweight";
     }
      else if ( category= 'ob'){
        cout<<"obese";
      }
        else{
            cout<<"invalid argument";

        } 
return 0;
}






