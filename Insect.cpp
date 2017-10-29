#include "Insect.h"

Insect::Insect(std::string favSong) : Animal()
{

}

Insect::Insect(std::string favSong, std::string animalType, double length, double weight, double lifespan, std::string sound,std::string name)
    : Animal(animalType,length,weight,lifespan,sound,name)
{
    mFavSong = favSong;
}

std::string Insect::get_favSong()
{
    return mFavSong;
}

void Insect::print()
{
    std::cout << this->get_name() <<std::endl
              << this->get_type() <<std::endl
              << this->get_length() <<std::endl
              <<this->get_weight() << std::endl
             <<this->get_lifespan() <<std::endl
            <<this->get_sound() <<std::endl
           <<this->mFavSong<<std::endl <<std::endl;
}
