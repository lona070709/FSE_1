#include <iostream>
#include "Person.h"

void Person::set_name(std::string new_name) { name = new_name; }
void Person::set_age(int new_age) { age = new_age; }
std::string Person::get_name() const { return name; }
int Person::get_age() const { return age; }

void Person::print_info() const {
    std::cout << "Person: " << name << ", age " << age << std::endl;
}