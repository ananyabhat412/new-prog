#include <iostream>
using namespace std;
int main() {
    double totalMarks = 0.0;
    double maxMarksPerSubject = 100;
    int numSubjects = 6; 

    double marks1, marks2, marks3, marks4, marks5, marks6;

    cout << "Enter marks for subject 1: ";
    cin >> marks1;

    cout << "Enter marks for subject 2: ";
    cin >> marks2;

    cout << "Enter marks for subject 3: ";
    cin >> marks3;

    cout << "Enter marks for subject 4: ";
    cin >> marks4;

    cout << "Enter marks for subject 5: ";
    cin >> marks5;

    cout << "Enter marks for subject 6: ";
    cin >> marks6;

    totalMarks = marks1 + marks2 + marks3 + marks4 + marks5 + marks6;

  double percentage = (totalMarks / (numSubjects * maxMarksPerSubject)) * 100;

    char grade;
    if (percentage >= 90) grade = 'A';
    else if (percentage >= 80) grade = 'B';
    else if (percentage >= 70) grade = 'C';
    else if (percentage >= 60) grade = 'D';
    else grade = 'F';

    cout << "Total Marks: " << totalMarks;
    cout << "Percentage: " << percentage ;
    cout << "Grade: " << grade;

    return 0;
}

