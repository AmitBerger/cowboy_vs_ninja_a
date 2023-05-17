#include "Team.hpp"
#include "Character.hpp"
#include <cmath>
#include <iostream>
#include <stdexcept>
using namespace ariel;
using namespace std;

Team::Team(Character *leader) {
  this->leader = leader;
  members.push_back(leader);
}
Team::Team(const Team &other) : leader(other.leader), members(), teamSize(0) {}
Team::~Team() {
  for (auto &member : members) {
    delete member;
  }
}
void Team::attack(Team *enemy) {}

void Team::add(Character *member) {}
string Team::print() { return " ko"; }
int Team::stillAlive() const { return 0; }


Team &Team::operator=(const Team &other) { return *this; }



Team2::Team2(Character *leader) : Team(leader) {}

void Team2::attack(Team *enemy) {}
string Team2::print() { return "aa"; }

int Team2::stillAlive() const { return 1; }
Team2 &Team2::operator=(const Team2 &other) { return *this; }