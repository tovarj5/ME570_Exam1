#include <QCoreApplication>
#include <iostream>
#include <vector>
#include <functional>
#include <algorithm>
#include "Animal.h"
#include "Bird.h"
#include "Mammal.h"
#include "Insect.h"
#include "Reptile.h"

//std::vector<Animal*> animalSort(int sort,std::vector<Animal*> collection);
bool sortLength(Animal *a, Animal *b);//Animal a, Animal b, int sort);
bool sortWeight(Animal *a, Animal *b);
bool sortLifespan(Animal *a, Animal *b);
bool collectionSort(Animal *a, Animal *b, int s);

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    //Create vector for animals
    std::vector<Animal*> AnimalsCollection ;
    std::cout <<"Hello Exam 1" << std::endl;

    //Create animals and input the information needed;.
    Bird *penguin = new Bird(3,"Bird",3.6,66.0,20,"Honk","Penguin");
    Mammal *bear = new Mammal("fur","Mammal",7.9,992,32,"Roar","Brown Bear");
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

    //Print the vector of animals
//    for(Animal *a:AnimalsCollection)
//    {
//        a->print_sound();
//    }
    int sort_method{1};
    for(int i{0};i<3;i++)
    {
        // THIS Commented out code is sorts the Animal Collection Vector using 3 different custome function Calls.
//        if(i==0)
//        {
//            std::sort(AnimalsCollection.begin(),AnimalsCollection.end(),sortLength);
//        }
//        else if(i==1)
//        {
//            std::sort(AnimalsCollection.begin(),AnimalsCollection.end(),sortWeight);
//        }
//        else if (i==2)
//        {
//            std::sort(AnimalsCollection.begin(),AnimalsCollection.end(),sortLifespan);
//        }
        //This sort uses a lambda function with the sort_method to sort all variations needed to sort the animal class.
        std::sort(AnimalsCollection.begin(),AnimalsCollection.end(), [sort_method] (Animal *a,Animal *b)
        {
            if (sort_method==1)
            {
                return a->get_length() < b->get_length();
            }
            else if(sort_method==2)
            {
                return a->get_weight() < b->get_weight();
            }
            else if(sort_method ==3)
            {
                return a->get_lifespan() < b->get_lifespan();
            }
         });
        for(Animal *a:AnimalsCollection)
        {
            a->print_sound();
        }

        std::cout << "- - - - - End of Sort: " << sort_method <<" - - - - - " <<std::endl;
        sort_method++;
    }

    //std::sort(AnimalsCollection.begin(),AnimalsCollection.end(),std::bind(collectionSort,_1,_2,sort_method));



    std::cout << "- - - - - End of Program - - - - - ";
    return a.exec();
}

bool sortLength(Animal *a,Animal *b)
{
    //Sorting from least to greatest.
    //Sort based on Length #1
    return a->get_length() < b->get_length();
}
bool sortWeight(Animal *a, Animal *b)
{
    //        //Sort based on Weight #2
    return a->get_weight() < b->get_weight();
}
bool sortLifespan(Animal *a, Animal *b)
{
    //       //Sort based on Lifespan #3
    return a->get_lifespan() < b->get_lifespan();
}
bool collectionSort(Animal *a,Animal *b,int s)
{
    if (s==1)
    {
        return a->get_length() < b->get_length();
    }

    else if(s==2)
    {
        return a->get_weight() < b->get_weight();
    }

    else if (s ==3)
    {
        return a->get_lifespan() < b->get_lifespan();
    }

}
