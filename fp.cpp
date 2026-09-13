#include <iostream>
#include <random>
#include "header.hpp"

int get_random_val(int min_val, int max_val){
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> range(min_val, max_val);
    return range(gen);
}

void footbl_player::random_num(){
    age = get_random_val(18, 35);
    number = get_random_val(1, 25);
}

void footbl_player::celebrate_birthday(){
    age++;
}

void footbl_player::score_goal(){
    scored_goals = get_random_val(1, 5);
}

void footbl_player::print_info(){
    std::cout << "Player number: " << number<< " | ";
    std::cout << "Age: " << age << " | ";
    std::cout <<"Scored goals: "<< scored_goals<<std::endl;
}