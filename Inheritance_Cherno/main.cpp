#include<stdio.h>
#include<iostream>
#include "includes/Logi.h"

using namespace std;

// Tutorials for Constructors, destructors and Inheritance;
//Cherno
// To include headers use g++ -o main.exe main.cpp includes/calculation.cpp

// Inheritance 
class Entity
{
    public:
        float X,Y;

        void Move(float xa, float ya)
        {
            X += xa;
            Y += ya;
        } 


};

class Player:public Entity
{
    public:
        const char* Name;

        void Printname(){

            cout<<Name<<endl;
        }


};


// float size is 4

// Player class is an Entity + additional functionalities for the class


int main(){
    Player player1;
    player1.Move(5,5);
    player1.X =2;

    cout<<player1.Y<<endl;
    player1.Move(5,5);
    cout<<player1.Y;
}