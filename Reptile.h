#include "Animal.h"

#ifndef REPTILE_H
#define REPTILE_H

class Reptile : public Animal
{
public:
    Reptile(bool poison);
    Reptile(bool poison,std::string animalType, double length ,double weight, double lifespan,std::string sound,std::string name);
    bool get_poison();
    void print();
private:
    bool mPoison{false};
};
#endif
