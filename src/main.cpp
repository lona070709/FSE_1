#include "Coach.h"
#include "Player.h"

int main() {
    Coach c;
    c.set_name("Ivan");
    c.set_age(40);
    c.set_experience(10);
    c.print_info();

    Player p;
    p.set_name("Oleg");
    p.set_age(22);
    p.set_number(9);
    p.print_info();

    return 0;
}