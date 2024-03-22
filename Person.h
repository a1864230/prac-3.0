#ifndef PERSON_H
#define PERSON_H

#include <string>

struct Person {
    std::string name;
    int age;
};

Person* createPersonArray(int n);

#endif // PERSON_H