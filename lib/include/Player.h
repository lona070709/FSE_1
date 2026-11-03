#ifndef PLAYER_H_
#define PLAYER_H_
#include "Person.h"

class Player : public Person {
private:
    int number = 0;

public:
    void set_number(int new_number);
    int get_number() const;

    void print_info() const override;
};

#endif