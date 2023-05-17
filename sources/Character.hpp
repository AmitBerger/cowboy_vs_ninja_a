#pragma once
#include "Point.hpp"
#include <iostream>
#include <string>
using namespace std;
namespace ariel {
    
class Character {

private:
  Point Cloc;
  string Cname;
  int Cscore;

public:
  Character();
  Character(string Cname, Point Cloc);
  virtual ~Character() = default;
  virtual string print();
  bool isAlive();
  double distance(Character &otherC);
  string getName();
  void hit(int num);
  int getHit();
  void setHit(int num);
  Point getLocation();
};
class Cowboy : public Character {
private:
  int NumBullets;

public:
  Cowboy(string Cname, Point Clocation);
  ~Cowboy() override = default;
  void shoot(Character *character);
  void reload();
  bool hasboolets();
  string print() override;
};

class Ninja : public Character {

private:
  int Nspeed;

public:
  Ninja(string Nname, Point Nlocation);
  ~Ninja() override = default;
  void slash(Character *enemy_character);
  virtual void move(Character *enemy_character);
  string print() override;
  int getspeed;
};

class OldNinja : public Ninja {
public:
  OldNinja(string ONname, Point ONlocation);
};
class YoungNinja : public Ninja {
public:
  YoungNinja(string YNname, Point ONlocation);
};
class TrainedNinja  : public Ninja {
public:
  TrainedNinja(string TNname, Point ONlocation);
  void move(Character* enemy) override;
};
} // namespace ariel
