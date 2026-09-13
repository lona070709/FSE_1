#ifndef OOP_FT
#define OOP_FT
#include <iostream>
#include <cstdint>

int get_random_val(int min_val, int max_val);
class footbl_player {
private:
    std::uint64_t age = 0;
    std::uint64_t number;
    std::uint64_t scored_goals = 0;
public:
    void random_num();
    void celebrate_birthday();
    void check_number();
    void score_goal();
    void print_info();
};
#endif
