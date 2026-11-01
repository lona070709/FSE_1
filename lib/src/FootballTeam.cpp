#include <iostream>
#include <random>
#include "FootballTeam.h"

int get_random_val(int min_val, int max_val) {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> range(min_val, max_val);
    return range(gen);
}

FootballTeam::FootballTeam(std::string team_name, int count) {
    name = team_name;
    players_count = count;
}

void FootballTeam::play_match() {
    int goals_for = get_random_val(0, 3);
    int goals_against = get_random_val(0, 3);
    scored_goals += goals_for;
    conceded_goals += goals_against;

    if (goals_for > goals_against) wins++;
    else if (goals_for == goals_against) draws++;
    else losses++;
}

void FootballTeam::add_player() { players_count++; }

void FootballTeam::add_goal() { scored_goals++; }

int FootballTeam::get_points() { return wins * 3 + draws; }

std::string FootballTeam::get_name() { return name; }

int FootballTeam::get_players_count() { return players_count; }

void FootballTeam::print_info() {
    std::cout << "Team: " << name << " | Players: " << players_count
              << " | W-D-L: " << wins << "-" << draws << "-" << losses
              << " | Goals: " << scored_goals << ":" << conceded_goals
              << " | Points: " << get_points() << std::endl;
}