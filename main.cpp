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
    Bird *penguin = new Bird(3,"Bird",3.6,66.0,20,"Honk","Penguin");
    Mammal *bear = new Mammal("fur","Mammal",7.9,992,32,"roar","Brown Bear");
    Insect *ladyBug = new Insect("lady in red","Insect",0.03,0.00003,1,"nEEh -pAAh","Lady Bug");
    Mammal *dolphin = new Mammal("Rubbery","Mammal",7,209,30,"Click","Dolphin");
    Bird *eagle = new Bird(2,"Bird",3,9.9,25,"Screech","Eagle");
    Reptile *cobra = new Reptile(true,"Reptile",19.8,22,20,"Hiss","Cobra");
    Insect *prayMantis = new Insect("Thriller","Insect",0.225,0.01,0.5,"Chrip","Praying Mantis");
    Reptile *Croc = new Reptile(false,"Reptile",18,1873,80,"Growl","Crocodile");

    //Put the animals into the vector
    AnimalsCollection.push_back(penguin);
    AnimalsCollection.push_back(bear);
    AnimalsCollection.push_back(ladyBug);
    AnimalsCollection.push_back(dolphin);
    AnimalsCollection.push_back(eagle);
    AnimalsCollection.push_back(cobra);
    AnimalsCollection.push_back(prayMantis);
    AnimalsCollection.push_back(Croc);

    ////////std::sort(collection.begin(),collection.end(),animalSort(1))

            //Print the vector of animals
    for(Animal *a:AnimalsCollection)
    {
        a->print_sound();
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
        for(Animal *a:collection)
        {
            a->get_length();

        }

    }
    else if(sort ==2)
    {
        //Sort based on Weight #2
        for(Animal *a:collection)
        {
            a->get_weight();
        }

    }

    else if (sort ==3)
    {
       //Sort based on Lifespan #3
        for(Animal *a:collection)
        {
            a->get_lifespan();
        }

    }

}
