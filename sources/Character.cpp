#include "Character.hpp"
#include <cmath>
#include <iostream>
#include <stdexcept>
using namespace ariel;
using namespace std;

Character::Character() {
  this->Cloc = Point();
  this->Cscore = 0;
  this->Cname = " ";
}
Character::Character(string Cname, Point Clocation) {
  this->Cloc = Clocation;
  this->Cscore = 0;
  this->Cname = Cname;
}

bool Character::isAlive() { return Cscore > 0; }

double Character::distance(Character &other) { return 0; }

int Character::getHit() { return this->Cscore; }

void Character::setHit(int num) { this->Cscore = num; }

void Character::hit(int num) { Cscore = Cscore - num; }

string Character::getName() { return this->Cname; }

Point Character::getLocation() { return this->Cloc; }

string Character::print() {
  cout << "Name: " << this->Cname << endl;
  cout << "Score: " << this->Cscore << endl;
  return "";
}