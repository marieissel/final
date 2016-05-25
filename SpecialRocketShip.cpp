/*
 * Name        : SpecialRocketShip.cpp
 * Author      : Marie Issel
 * Description : 
 */
#include "SpecialRocketShip.h"
#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
using std::cout;
using std::endl;
using std::string;
using std::stringstream;
using namespace std;


SpecialRocketShip::SpecialRocketShip() 
{
    name_ = "RS Cloaky";
    fuel_ = 1000;
    cloaked_ = false;
}

SpecialRocketShip::SpecialRocketShip(string newName, unsigned int newFuel) 
{
    name_ = newName;
    fuel_ = newFuel;
    cloaked_ = false;
}

void SpecialRocketShip::setCloaked(bool cloak)
{
    cloaked_ = cloak;
}

bool SpecialRocketShip::getCloaked() const
{
    return cloaked_;
}