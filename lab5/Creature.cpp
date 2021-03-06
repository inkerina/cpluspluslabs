#include "Creature.h"
/**********
* File: Creature.cpp
*
* Intended for Lab 5: Classes
*
**********/

//Constructor -- Already Implemented

Creature::Creature() {
  cout << "Creating a creature..." << endl;
  m_species = "goat";
  m_age = 7;
  m_isHostile = false;
}

void Creature::setAge(int age){
  m_age = age;
}

void Creature::setSpecies(string species){
  m_species = species;
}

void Creature::setHostility(bool hostility){
  m_isHostile = hostility; 
}

bool Creature::getHostility(){

  return m_isHostile;
}

//Accessors -- Student implements these

int Creature::getAge(){

  return m_age;

}
string Creature::getSpecies(){

  return m_species;
}


//Custom Functions -- Student implements these (attack and age)

void Creature::attack(){

  if(m_isHostile){
    cout << m_species << " attacks you! " <<endl;
  }else{
    cout << m_species << " approaches you and nuzzles you." <<endl;
  }


}

void Creature::age(){

  setAge(getAge() + 1);

}

