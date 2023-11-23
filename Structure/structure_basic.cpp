// Structure Basic using C++
#include <iostream>
using namespace std;

// Definition of a structure named 'medical'
struct medical {
    int regno;            // Integer member representing registration number
    char name[30];        // Character array member representing the name (up to 30 characters)
    char opd[40];         // Character array member representing the OPD (up to 40 characters)
    char diag[50];        // Character array member representing the diagnosis (up to 50 characters)
} med1, med2;             // Two instances of the 'medical' structure named 'med1' and 'med2'

int main() {
    cout << "Welcome to the medical records entry system simulation" << endl;

    // Details of Patient 1
    cout << "Details of Patient 1" << endl;
    cout << "Enter Registration Number: ";
    cin >> med1.regno;
    cin.ignore();  // to consume the newline character after entering the registration number
    cout << "Enter Name: ";
    cin.getline(med1.name, 30);  // Reading the name (may contain spaces) using getline
    cout << "Enter OPD: ";
    cin.getline(med1.opd, 40);   // Reading the OPD (may contain spaces) using getline
    cout << "Enter Diagnosis: ";
    cin.getline(med1.diag, 50);  // Reading the diagnosis (may contain spaces) using getline

    // Details of Patient 2
    cout << "Details of Patient 2" << endl;
    cout << "Enter Registration Number: ";
    cin >> med2.regno;
    cin.ignore();  // to consume the newline character after entering the registration number
    cout << "Enter Name: ";
    cin.getline(med2.name, 30);  // Reading the name (may contain spaces) using getline
    cout << "Enter OPD: ";
    cin.getline(med2.opd, 40);   // Reading the OPD (may contain spaces) using getline
    cout << "Enter Diagnosis: ";
    cin.getline(med2.diag, 50);  // Reading the diagnosis (may contain spaces) using getline

    // Printing the Details Entered
    cout << med1.regno << endl;
    cout << med1.name << endl;
    cout << med1.opd << endl;
    cout << med1.diag << endl;
    cout << med2.regno << endl;
    cout << med2.name << endl;
    cout << med2.opd << endl;
    cout << med2.diag << endl;

    cout << endl << "Simulation End" << endl;

    return 0;  // Indicating successful completion to the operating system
}
