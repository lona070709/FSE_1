#ifndef COACH_H
#define COACH_H
#include "Person.h"

class Coach : public Person {
private:
    int experience = 0;

public:
    void set_experience(int new_experience);
    int get_experience() const;

    void print_info() const override;
};

#endif
