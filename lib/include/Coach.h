#ifndef COACH_H
#define COACH_H
#include "Person.h"

class Coach : public Person {
private:
    int experience;
public:
    Coach(std::string coach_name, int coach_age, int coach_experience);
    void print_info() override;
};
#endif 