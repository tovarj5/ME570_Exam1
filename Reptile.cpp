#include "Reptile.h"

Reptile::Reptile(bool poison) :Animal()
{

}

Reptile::Reptile(bool poison, std::string animalType, double length, double weight, double lifespan, std::string sound)
    : Animal(animalType,length,weight,lifespan,sound)
{
    mPoison = poison;
}

bool Reptile::get_poison()
{
    return mPoison;
}

void Reptile::print()
{
    std::cout << this->get_type() <<std::endl
              << this->get_length() <<std::endl
              <<this->get_weight() << std::endl
             <<this->get_lifespan() <<std::endl
            <<this->get_sound() <<std::endl
           <<this->mPoison<<std::endl <<std::endl;
}
