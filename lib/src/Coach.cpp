#include <iostream>
#include "Coach.h"

Coach::Coach(std::string coach_name, int coach_age, int coach_experience)
    : Person(coach_name, coach_age) {
    experience = coach_experience;
}

void Coach::print_info() {
    std::cout << "Coach: " << name << " | Age: " << age
              << " | Experience: " << experience << " years" << std::endl;
}