#include <iostream>
using namespace std;

// Definition of a structure named 'student'
struct student {
    char name[100];  // assuming a maximum length for the name
    int rollno;
    float cpi;
};

int main() {
    // Declare a pointer to a 'student' structure and an instance of the 'student' structure
    student *studPtr, stud1;

    // Assign the address of 'stud1' to 'studPtr'
    studPtr = &stud1;

    // Prompt the user to enter student details
    cout << "Enter Name: ";
    cin >> studPtr->name;  // Read the name using 'cin' and the '->' operator to access members through a pointer

    cout << "Enter RollNo: ";
    cin >> studPtr->rollno;  // Read the roll number using 'cin' and the '->' operator

    cout << "Enter CPI: ";
    cin >> studPtr->cpi;  // Read the CPI (Cumulative Performance Index) using 'cin' and the '->' operator

    // Display student details
    cout << "\nStudent Details:" << endl;
    cout << "Name: " << studPtr->name << endl;  // Display the name using 'cout' and the '->' operator
    cout << "RollNo: " << studPtr->rollno << endl;  // Display the roll number using 'cout' and the '->' operator
    cout << "CPI: " << studPtr->cpi << endl;  // Display the CPI using 'cout' and the '->' operator

    return 0;
}
