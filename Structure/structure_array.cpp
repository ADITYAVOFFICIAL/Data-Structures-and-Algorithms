// Array of Structure
#include <iostream>
using namespace std;

// Definition of a structure named 'student'
struct student {
    int rolln;           // Integer member representing roll number
    char name[20];       // Character array member representing the name (up to 20 characters)
    float marks;         // Float member representing the marks
};

int main() {
    int n;
    cout << "Enter number of entries: ";   // Prompting the user to enter the number of entries
    cin >> n;                              // Reading the number of entries from the user

    // Declaring an array of 'student' structures with size 'n'
    struct student st[n];

    // Loop to input data for each student
    for (int i = 0; i < n; i++) {
        cout << "Enter details for student " << i + 1 << ":" << endl;

        // Reading roll number, name, and marks for each student
        cin >> st[i].rolln;
        cin.ignore();   // Ignoring the newline character after reading roll number
        cin.getline(st[i].name, 20);  // Reading the name (may contain spaces) using getline
        cin >> st[i].marks;
    }

    // Loop to display the details of each student
    for (int i = 0; i < n; i++) {
        // Printing the header for each student
        cout << "\tRoll\tName\tMarks" << endl;

        // Printing the details of each student
        cout << " " << st[i].rolln << "\t\t" << st[i].name << "\t\t" << st[i].marks << endl;
    }

    return 0;  // Indicating successful completion to the operating system
}
