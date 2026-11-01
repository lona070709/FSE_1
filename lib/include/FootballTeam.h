#ifndef FOOTBALL_TEAM_H
#define FOOTBALL_TEAM_H
#include <iostream>
#include <string>

class FootballTeam {
private:
    std::string name;
    int players_count;
    int wins = 0;
    int draws = 0;
    int losses = 0;
    int scored_goals = 0;
    int conceded_goals = 0;
public:
    FootballTeam(std::string team_name, int count);
    void play_match();
    void add_player();
    void add_goal();
    int get_points();
    std::string get_name();
    int get_players_count();
    void print_info();
};
#endif // FOOTBALL_TEAM_H