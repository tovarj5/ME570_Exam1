#include "Animal.h"

#ifndef BIRD_H
#define BIRD_H

class Bird : public Animal
{
public:
    //Bird(int eggs);
    Bird(int ID);
    Bird(int eggs,std::string animalType, double length ,double weight, double lifespan,std::string sound);
    int get_eggsLaid();
    void print();
private:
    int mEggsLaid{0};
};
#endif
