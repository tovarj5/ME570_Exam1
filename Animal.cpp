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

Animal::Animal()//std::string animalType, double length, double weight, double lifespan, std::string sound)
{

}

Animal::Animal(int id)
{

}

//void Animal::get_type(std::string &animalType)
//{
//    animalType = mAnimalType;
//}

//void Animal::get_length(double &length)
//{
//    length = mLength;
//}

//void Animal::get_weight(double &weight)
//{
//    weight = mWeight;
//}

//void Animal::get_lifespan(double &lifespan)
//{
//    lifespan = mLifespan;
//}

//void Animal::get_sound(std::string &sound)
//{
//    sound = mSound;
//}
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

