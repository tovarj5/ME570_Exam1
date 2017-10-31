#ifndef ANIMAL_H
#define ANIMAL_H

#include <QString>
#include <string>
#include <iostream>
#include <vector>

class Animal
{
public:
    //Constructors to create animal
    Animal(std::string animalType, double length ,double weight, double lifespan,std::string sound,std::string name);
    Animal();
    Animal(int id);

    //Get functions for class variables
    std::string get_type();
    double get_length();
    double get_weight();
    double get_lifespan();
    std::string get_sound();
    std::string get_name();

    //Print functions for sound and other information.
    virtual void print() =0;
    void print_sound();

private:
    int mID{0};
    std::string mAnimalType{""};
    double mLength{0};
    double mWeight{0};
    double mLifespan{0};
    std::string mSound{""};
    std::string mName{""};
};

#endif
