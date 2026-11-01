#include <iostream>
#include "Person.h"

Person::Person(std::string person_name, int person_age) {
    name = person_name;
    age = person_age;
}

void Person::celebrate_birthday() { age++; }

std::string Person::get_name() { return name; }

void Person::print_info() {
    std::cout << "Person: " << name << " | Age: " << age << std::endl;
}