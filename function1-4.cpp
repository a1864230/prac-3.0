#include "Person.h"  // Assuming Person.h defines the Person struct

PersonList shallowCopyPersonList(PersonList pl) {
  PersonList copy;
  copy.size = pl.size;
  // Point the new list's people field to the same array as the original
  copy.people = pl.people;
  return copy;
}