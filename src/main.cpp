#include <iostream>
#include <vector>
#include "Person.h"
#include "Player.h"
#include "Coach.h"
#include "FootballTeam.h"

int main() {

    Coach coach;
    coach.set_name("Oleksandr");
    coach.set_age(48);
    coach.set_experience(15);

    Player p1, p2, p3;
    p1.set_name("Andriy");
    p1.set_age(24);
    p1.set_number(9);

    p2.set_name("Oleh");
    p2.set_age(27);
    p2.set_number(10);

    p3.set_name("Serhiy");
    p3.set_age(22);
    p3.set_number(7);

    FootballTeam team("Dynamo", 0);
    team.add_player();
    team.add_player();
    team.add_player();

    std::vector<const Person*> squad = {&coach, &p1, &p2, &p3};
    std::cout << "=== Squad ===" << std::endl;
    for (const Person* person : squad) {
        person->print_info();
    }

    std::cout << "\n=== Matches ===" << std::endl;
    for (int i = 1; i <= 5; i++) {
        team.play_match();
        std::cout << "After match " << i << ": ";
        team.print_info();
    }

    std::cout << "\n=== Final ===" << std::endl;
    team.print_info();
    std::cout << "Players in team: " << team.get_players_count() << std::endl;

    return 0;
}