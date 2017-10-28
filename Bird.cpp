#include "Bird.h"

//Bird::Bird(int eggs) //: Animal(std::string animalType, double length,double weight,double lifespan,std::string sound)
//{

//}

Bird::Bird(int id) : Animal(id)
{

}

Bird::Bird(int eggs, std::string animalType, double length, double weight, double lifespan, std::string sound) :
    Animal(animalType, length ,weight, lifespan,sound)
{
    mEggsLaid = eggs;
}

int Bird::get_eggsLaid()
{
    return mEggsLaid;
}

void Bird::print()
{
    std::cout << this->get_type() <<std::endl
              << this->get_length() <<std::endl
              <<this->get_weight() << std::endl
             <<this->get_lifespan() <<std::endl
            <<this->get_sound() <<std::endl
           <<this->mEggsLaid <<std::endl <<std::endl;
}