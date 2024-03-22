#include <iostream>
#include "Person.h"
int main() {
    int n = 5; // Change the size as needed
    Person* persons = createPersonArray(n);

    // Printing the array contents for testing
    for (int i = 0; i < n; ++i) {
        std::cout << "Person " << i+1 << ": Name = " << persons[i].name << ", Age = " << persons[i].age << std::endl;
    }

    // Don't forget to free the dynamically allocated memory
    delete[] persons;

    return 0;
}
