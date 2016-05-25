/*
 * Name        : RocketShip.cpp
 * Author      : Marie Issel
 * Description : 
 */
#include "RocketShip.h"
#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
using std::cout;
using std::endl;
using std::string;
using std::stringstream;
using namespace std;


RocketShip::RocketShip() 
{
    name_ = "RS NullPointer";
    fuel_ = 1000;
}

void RocketShip::setName(string name)
{
    name_ = name;
}

void RocketShip::setFuel(unsigned int fuel)
{
    fuel_ = fuel;
}

string RocketShip::getName() const
{
    return name_;
}

unsigned int RocketShip::getFuel() const
{
    return fuel_;
}

void RocketShip::addFuelCell(unsigned int fuelAmount)
{
   fuelCells.push_back (fuelAmount);
}

bool RocketShip::removeFuelCell(unsigned int cellNumber)
{
    int size = fuelCells.size();
    if (cellNumber >= size)
    {
        return false;
    }
    else
    {
        fuelCells.erase (fuelCells.begin() + cellNumber);
        return true;
    }
}

bool RocketShip::addFuelToCell(unsigned int cellNumber, unsigned int fuelAmount)
{
    int size = fuelCells.size();
    if (cellNumber >= size)
    {
        return false;
    }
    else
    {
        fuelCells[cellNumber] += fuelAmount;
        return true;
    }
}

string RocketShip::burnFuel(unsigned int cellNumber)
{
    stringstream ss;
    
    if (cellNumber >= fuelCells.size())
    {
        return "";
    }

    int contents = fuelCells.at(cellNumber);
    
    for (int i=0; i<contents; i++)
    {
        ss << "*";
    }
    fuelCells[cellNumber] = 0;
    return ss.str();
}

