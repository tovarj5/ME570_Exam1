#ifndef INSECT_H
#define INSECT_H

#include "Animal.h"

class Insect : public Animal
{
public:
    Insect(std::string favSong);
    Insect(std::string favSong,std::string animalType, double length ,double weight, double lifespan,std::string sound);
    std::string get_favSong();
    void print();
private:
    std::string mFavSong{""};
};
#endif
