#pragma once

#include "Character.hpp"
#include <string>
#include <vector>
using namespace std;

namespace ariel {

class Team {
private:
  vector<Character *> members;
  Character *leader;
  int teamSize;

public:
  Team(Character *initialMember);
  Team(const Team &other);
  ~Team();

  virtual void attack(Team *enemyTeam);
  virtual string print();
  virtual void add(Character *newMember);

  int stillAlive() const;

  Team &operator=(const Team &other);
};

class Team2 : public Team {
public:
  Team2(Character *initialMember);
  Team2(const Team2 &other);
  ~Team2();
  Team2 &operator=(const Team2 &other);
  void attack(Team *enemyTeam) override;
  string print() override;
  int stillAlive() const;
};

class SmartTeam : public Team {
public:
  SmartTeam(Character *initialMember);
  SmartTeam(const SmartTeam &other);
  ~SmartTeam();
  SmartTeam &operator=(const SmartTeam &other);
  void attack(Team *enemyTeam) override;
  string print() override;
};

} // namespace ariel
