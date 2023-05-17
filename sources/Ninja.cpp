#include "Character.hpp"
#include <iostream>
#include <stdexcept>
#include <cmath>
#include <string>
using namespace std;
using namespace ariel;

Ninja::Ninja (string Nname, Point Nlocation) : Character(Nname, Nlocation){
}

void Ninja::move(Character* enemy){

}

void Ninja::slash(Character* enemy){
    if (!isAlive()){
        throw runtime_error("Error- the ninja is not alive");
    }
}
string Ninja::print(){
    return "x";
}



YoungNinja::YoungNinja(string Nname, Point location): Ninja(Nname, location){
   
    setHit(100);
}


TrainedNinja::TrainedNinja(string Nname, Point location): Ninja(Nname, location){
   
    setHit(120);
}
OldNinja::OldNinja(string Nname, Point location): Ninja(Nname, location){
    
    setHit(150);
}

void TrainedNinja::move(Character* enemy){}

