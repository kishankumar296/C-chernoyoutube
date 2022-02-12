#include<stdio.h>
#include<iostream>
#include "includes/Logi.h"

using namespace std;

// Tutorials for Constructors, destructors and Inheritance;
//Cherno
// To include headers use g++ -o main.exe main.cpp includes/calculation.cpp

// Virtual functions - Dynamic dispatch - V table - Maps base class to functions
// If you want to override a function mark the base class 
// Only enstantiate a subclass class if the all the virtual functions are implemented 


class Entity
{
    public:

        virtual string GetName(){return "entity";}

};



class Player:public Entity
{
    private:
        string m_Name;
    public:
        Player(const std::string& name)
            :m_Name(name) {}

    // overrride this in base class
    string GetName(){return m_Name;}


};

void PrintName(Entity* entity)
{
    cout<<entity->GetName() << endl;
}

// float size is 4

// Player class is an Entity + additional functionalities for the class


int main(){
    // Entity* e = new Entity();
    // cout << e->GetName() <<endl;

    // Player* p = new Player("Cherno");
    // cout <<p->GetName()<<endl;

    // Here p is the entity of player
    // Entity* entity = p;
    // cout<<entity->GetName()<<endl;

    Entity* e = new Entity();
    PrintName(e);

    Player* p = new Player("Cherno");
    PrintName(p);

    cin.get() ; 
}