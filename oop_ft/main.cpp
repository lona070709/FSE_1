#include <iostream>
#include "header.hpp"
#include <vector>

int main(){
    std::vector<footbl_player> team;
    for (int i = 0; i < 11;i++){
        footbl_player fp;
        fp.random_num();
        team.push_back(fp);
    }

    for (int i = 0; i < 11; i++) {
        int season_goals = get_random_val(0, 5);
        for (int j = 0; j < season_goals; j++) {
            team[i].score_goal();
        }
    }
    
    std::cout<< "Football team's monthly results:" << std::endl;
    for (int i = 0; i < 11; i++){
        team[i].print_info();
    }

    return 0;
}