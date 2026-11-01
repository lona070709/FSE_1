#include <iostream>
#include "Player.h"

Player::Player(std::string player_name, int player_age, int player_number)
    : Person(player_name, player_age) {
    number = player_number;
}

void Player::join_team(FootballTeam& team) {
    team_name = team.get_name();
    team.add_player();
}

void Player::score_goal(FootballTeam& team) {
    if (team_name != team.get_name()) {
        std::cout << name << " does not play for " << team.get_name() << std::endl;
        return;
    }
    goals++;
    team.add_goal();
}

int Player::get_goals() { return goals; }

void Player::print_info() {
    std::cout << "Player: " << name << " | Age: " << age << " | Number: " << number
              << " | Goals: " << goals << " | Team: " << team_name << std::endl;
}