#include <QCoreApplication>
#include <iostream>
#include <vector>
#include "Animal.h"
#include "Bird.h"
#include "Mammal.h"
#include "Insect.h"
#include "Reptile.h"

std::vector<Animal*> animalSort(int sort,std::vector<Animal*> collection);

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    //Create vector for animals
    std::vector<Animal*> AnimalsCollection ;
    std::cout <<"Hello Exam 1" << std::endl;

    //Create animals and input the information needed;.
    Bird *penguin = new Bird(3,"Bird",3.6,66.0,20,"Honk");
    Reptile *Croc = new Reptile(false,"Reptile",18,1873,80,"Growl");
    Mammal *bear = new Mammal("fur","Mammal",7.9,992,32,"roar");
    Insect *ladyBug = new Insect("lady in red","Insect",0.03,0.00003,1,"nEEh -pAAh");

    //Put the animals into the vector
    AnimalsCollection.push_back(penguin);
    AnimalsCollection.push_back(Croc);
    AnimalsCollection.push_back(bear);
    AnimalsCollection.push_back(ladyBug);

    //Print the vector of animals
    for(Animal *a:AnimalsCollection)
    {
        a->print();
    }
    int sort_method{0};

    std::cout << "- - - - - End of Program - - - - - ";
    return a.exec();
}

std::vector<Animal*> animalSort(int sort,std::vector<Animal*> collection)
{
    //Sorting from least to greatest.
    if(sort==1)
    {
        //Sort based on Length #1

    }
    else if(sort ==2)
    {
        //Sort based on Weight #2

    }

    else if (sort ==3)
    {
       //Sort based on Lifespan #3

    }

}
