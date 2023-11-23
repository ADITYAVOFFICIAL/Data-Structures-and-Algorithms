//Self Refrential Structure
#include<iostream>
using namespace std;

// Definition of a structure named 'node'
struct node {
    int mem1;            // Integer member 1
    int mem2;            // Integer member 2
    struct node* next;   // Pointer to the next node of the same structure type
};

int main() {
    // Creating an instance of the 'node' structure named 'nod1'
    node nod1;
    nod1.mem1 = 1;        // Setting the value of mem1 for nod1 to 1
    nod1.mem2 = 2;        // Setting the value of mem2 for nod1 to 2
    nod1.next = NULL;     // Setting the next pointer for nod1 to NULL (initially no next node)

    // Creating another instance of the 'node' structure named 'nod2'
    node nod2;
    nod2.mem1 = 10;       // Setting the value of mem1 for nod2 to 10
    nod2.mem2 = 20;       // Setting the value of mem2 for nod2 to 20
    nod2.next = NULL;     // Setting the next pointer for nod2 to NULL (initially no next node)

    nod1.next = &nod2;    // Setting the next pointer for nod1 to point to nod2 (linking the nodes)

    node* ptr1 = &nod1;    // Creating a pointer to a 'node' structure and setting it to point to nod1

    // Printing the values of mem1 and mem2 for the next node through the pointer
    cout << "Var 2 member 1: " << ptr1->next->mem1 << endl;
    cout << "Var 2 member 2: " << ptr1->next->mem2 << endl;

    return 0;  // indicating successful completion to the operating system
}
