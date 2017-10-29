#ifndef ANIMAL_H
#define ANIMAL_H

#include <QString>
#include <string>
#include <iostream>
#include <vector>

class Animal
{
public:
    Animal(std::string animalType, double length ,double weight, double lifespan,std::string sound,std::string name);
    Animal();
    Animal(int id);
    std::string get_type();//std::string &animalType);
    double get_length();//double &length);
    double get_weight();//double &weight);
    double get_lifespan();//double &lifespan);
    std::string get_sound();//std::string &sound);
    virtual void print() =0;
    void print_sound();
    std::string get_name();
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
