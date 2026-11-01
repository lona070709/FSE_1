#ifndef PLAYER_H
#define PLAYER_H
#include <string>
#include "Person.h"
#include "FootballTeam.h"

class Player : public Person {
private:
    int number;
    int goals = 0;
    std::string team_name = "none";
public:
    Player(std::string player_name, int player_age, int player_number);
    void join_team(FootballTeam& team);
    void score_goal(FootballTeam& team);
    int get_goals();
    void print_info() override;
};
#endif 