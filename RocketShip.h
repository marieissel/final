/*
 * Name        : RocketShip.h
 * Author      : Marie Issel
 * Description : 
 */

#ifndef LAB_H
#define LAB_H

#include <iostream>
#include <string>
#include <cstring>
#include <vector>
using std::cout;
using std::endl;
using std::string;
using std::vector;

class RocketShip {
    
    public:
            void setName(string name);
            void setFuel(unsigned int fuel);
            string getName() const;
            unsigned int getFuel() const;
            RocketShip();
            void addFuelCell(unsigned int fuelAmount);
            bool removeFuelCell(unsigned int cellNumber);
            bool addFuelToCell(unsigned int cellNumber, unsigned int fuelAmount);
            string burnFuel(unsigned int cellNumber);
    
    private:
            string name_;
            unsigned int fuel_;
            std::vector<unsigned int> fuelCells;
    
};

#endif

/* 
new private data members
                vector<unsigned int> fuelCells

        new public function interface
                void addFuelCell(unsigned int fuelAmount)
                bool removeFuelCell(unsigned int cellNumber)

                bool addFuelToCell(unsigned int cellNumber,
                                   unsigned int fuelAmount)
                string burnFuel(unsigned int cellNumber)
*/ 