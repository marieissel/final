/*
 * Name        : SpecialRocketShip.h
 * Author      : Marie Issel
 * Description : 
 */

#ifndef LAB_A
#define LAB_A

#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include "RocketShip.h"
using std::cout;
using std::endl;
using std::string;
using std::vector;

class SpecialRocketShip : public RocketShip
{
   public:
      void setCloaked(bool cloak);
      bool getCloaked() const;
      SpecialRocketShip();
      SpecialRocketShip(string newName, unsigned int newFuel);
   private: 
      bool cloaked_;
      string name_;
      unsigned int fuel_;
};
#endif