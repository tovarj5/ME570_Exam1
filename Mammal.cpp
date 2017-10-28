#include "Mammal.h"


Mammal::Mammal(std::string skin) : Animal()
{

}

Mammal::Mammal(std::string skin, std::string animalType, double length, double weight, double lifespan, std::string sound)
    :Animal(animalType,length,weight,lifespan,sound)
{
    mSkin = skin;
}

std::string Mammal::get_skin()
{
    return mSkin;
}

void Mammal::print()
{
    std::cout << this->get_type() <<std::endl
              << this->get_length() <<std::endl
              <<this->get_weight() << std::endl
             <<this->get_lifespan() <<std::endl
            <<this->get_sound() <<std::endl
           <<this->mSkin<<std::endl <<std::endl;
}
