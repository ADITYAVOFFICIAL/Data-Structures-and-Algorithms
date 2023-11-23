// Nesting in Structure using C++
#include <iostream>
using namespace std;

// Definition of a structure named 'Address'
struct Address {
    char HouseNo[25];  // Character array member representing house number (up to 25 characters)
    char City[25];     // Character array member representing city (up to 25 characters)
    char PinCode[25];  // Character array member representing pin code (up to 25 characters)
};

// Definition of a structure named 'Student' with nested structure 'Address'
struct Student {
    char name[25];     // Character array member representing student name (up to 25 characters)
    int roll;          // Integer member representing student roll number
    float cpi;         // Float member representing student CPI (Cumulative Performance Index)
    Address Add;       // Nested structure member representing student address
};

int main() {
    // Creating an instance of the 'Student' structure named 's'
    Student s;

    // Prompting the user to enter details for the student
    cout << "\n\tEnter Student Name : ";
    cin >> s.name;

    cout << "\n\tEnter Student Roll Number : ";
    cin >> s.roll;

    cout << "\n\tEnter Student CPI : ";
    cin >> s.cpi;

    cout << "\n\tEnter Student House No : ";
    cin >> s.Add.HouseNo;

    cout << "\n\tEnter Student City : ";
    cin >> s.Add.City;

    cout << "\n\tEnter Student Pincode : ";
    cin >> s.Add.PinCode;
    
    // Displaying Details of Students
    cout  << "\n\tDetails of Students"<< endl;
    cout << "\n\tStudent Name : " << s.name;
    cout << "\n\tStudent Roll Number : " << s.roll;
    cout << "\n\tStudent CPI : " << s.cpi;
    cout << "\n\tStudent House No : " << s.Add.HouseNo;
    cout << "\n\tStudent City : " << s.Add.City;
    cout << "\n\tStudent Pincode : " << s.Add.PinCode;

    return 0;  // Indicating successful completion to the operating system
}
