#include "Character.hpp"
#include <iostream>
#include <stdexcept>
#include <cmath>
#include <string>
using namespace ariel;
using namespace std;

Cowboy::Cowboy(string Cname, Point Clocation): Character(Cname, Clocation){}

void Cowboy::shoot( Character* enemy){

}

bool Cowboy::hasboolets(){
    return false;
}

void Cowboy::reload(){

}

string Cowboy::print(){
    return "x";
}