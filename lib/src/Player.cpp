#include <iostream>
#include "Player.h"

void Player::set_number(int new_number) { number = new_number; }
int Player::get_number() const { return number; }

void Player::print_info() const {
    std::cout << "Player: " << get_name() << ", age " << get_age()
              << ", number " << number << std::endl;
}