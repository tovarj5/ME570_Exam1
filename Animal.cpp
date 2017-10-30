#include "Animal.h"

Animal::Animal(std::string animalType, double length, double weight, double lifespan, std::string sound,std::string name)
{
    mAnimalType = animalType;
    mLength = length;
    mWeight = weight;
    mLifespan = lifespan;
    mSound = sound;
    mName = name;
}

Animal::Animal()
{

}

Animal::Animal(int id)
{

}

std::string Animal::get_type()
{
    return mAnimalType;
}
double Animal::get_length()
{
    return mLength;
}
double Animal::get_weight()
{
    return mWeight;
}
double Animal::get_lifespan()
{
    return mLifespan;
}
std::string Animal::get_sound()
{
    return mSound;
}

void Animal::print_sound()
{
    std::cout <<"Animal: " << mName <<std::endl
             <<"Sound: " <<mSound <<std::endl <<std::endl;
}

std::string Animal::get_name()
{
    return mName;
}

