#include <iostream>
#include "Person.h"  
#include "function-1-4.cpp"  

int main() {
  // Create a sample PersonList
  PersonList list;
  list.size = 2;
  list.people = new Person[list.size]; 

  
  list.people[0].name = "Alice";
  list.people[1].name = "Bob";

  
  PersonList copy = shallowCopyPersonList(list);

  
  std::cout << "Original list:\n";
  for (int i = 0; i < list.size; ++i) {
    std::cout << list.people[i].name << std::endl;
  }

  
  std::cout << "\nCopied list:\n";
  for (int i = 0; i < copy.size; ++i) {
    std::cout << copy.people[i].name << std::endl;
  }

  
  copy.people[0].name = "Charlie";

  
  std::cout << "\nOriginal list (unchanged):\n";
  for (int i = 0; i < list.size; ++i) {
    std::cout << list.people[i].name << std::endl;
  }

  
  delete[] list.people;
  delete[] copy.people;

  return 0;
}