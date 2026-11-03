#include <iostream>
#include "Coach.h"

void Coach::set_experience(int new_experience) { experience = new_experience; }
int Coach::get_experience() const { return experience; }

void Coach::print_info() const {
    std::cout << "Coach: " << get_name() << ", age " << get_age()
              << ", experience " << experience << " years" << std::endl;
}