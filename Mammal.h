#ifndef MAMMAL_H
#define MAMMAL_H

#include "Animal.h"

class Mammal : public Animal
{
public:
    Mammal(std::string skin);
    Mammal(std::string skin,std::string animalType, double length ,double weight, double lifespan,std::string sound,std::string name);
    std::string get_skin();
    void print();
private:
    std::string mSkin{""};
};
#endif
