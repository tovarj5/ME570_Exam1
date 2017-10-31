#include "Bird.h"

//Bird::Bird(int eggs) //: Animal(std::string animalType, double length,double weight,double lifespan,std::string sound)
//{

//}

Bird::Bird(int id) : Animal(id)
{

}
//Get information needed. Fill in the class specific variables. and pass on the other variables into the animal class.
Bird::Bird(int eggs, std::string animalType, double length, double weight, double lifespan, std::string sound,std::string name) :
    Animal(animalType, length ,weight, lifespan,sound,name)
{
    mEggsLaid = eggs;
}

int Bird::get_eggsLaid()
{
    return mEggsLaid;
}
//Print function for Bird
void Bird::print()
{
    std::cout << this->get_name() <<std::endl
              << this->get_type() <<std::endl
              << this->get_length() <<std::endl
              <<this->get_weight() << std::endl
             <<this->get_lifespan() <<std::endl
            <<this->get_sound() <<std::endl
           <<this->mEggsLaid <<std::endl <<std::endl;
}
