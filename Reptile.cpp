#include "Reptile.h"

Reptile::Reptile(bool poison) :Animal()
{

}
//Get information needed. Fill in the class specific variables. and pass on the other variables into the animal class.
Reptile::Reptile(bool poison, std::string animalType, double length, double weight, double lifespan, std::string sound,std::string name)
    : Animal(animalType,length,weight,lifespan,sound,name)
{
    mPoison = poison;
}

bool Reptile::get_poison()
{
    return mPoison;
}

void Reptile::print()
{
    std::cout << this->get_name() <<std::endl
              << this->get_type() <<std::endl
              << this->get_length() <<std::endl
              <<this->get_weight() << std::endl
             <<this->get_lifespan() <<std::endl
            <<this->get_sound() <<std::endl
           <<this->mPoison<<std::endl <<std::endl;
}
