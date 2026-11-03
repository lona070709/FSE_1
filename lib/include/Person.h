#ifndef PERSON_H
#define PERSON_H
#include <string>

class Person {
private:
    std::string name;
    int age = 0;

public:
    void set_name(std::string new_name);
    void set_age(int new_age);
    std::string get_name() const;
    int get_age() const;

    virtual void print_info() const;
};

#endif