#include "Player.h"
#include "Coach.h"
#include "FootballTeam.h"

int main() {
    FootballTeam team("Dynamo", 0);
    Player p1("Ivan", 20, 10);
    Player p2("Oleh", 22, 7);
    Coach coach("Petro", 45, 15);

    p1.join_team(team);
    p2.join_team(team);
    p1.score_goal(team);
    p2.celebrate_birthday();
    team.play_match();

    p1.print_info();
    p2.print_info();
    coach.print_info();

    team.print_info();
    team.print_info();
    return 0;
}