#ifndef PERSON_H
#define PERSON_H
#include <string>

class Person {
protected:
    std::string name;
    int age;
public:
    Person(std::string person_name, int person_age);
    void celebrate_birthday();
    std::string get_name();
    virtual void print_info();
};
#endif