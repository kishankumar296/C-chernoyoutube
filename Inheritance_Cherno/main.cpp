#include<stdio.h>
#include<iostream>
#include "includes/Logi.h"

using namespace std;

// Tutorials for Constructors, destructors and Inheritance;
//Cherno
// To include headers use g++ -o main.exe main.cpp includes/calculation.cpp


// Constructor special method which runs when special method is created. Used to initialize the memory
// Destructors uninitialize the memory. When the scope ends, destructors gets called and it gets deleted.

class Entity{
    public:
        float X,Y;

        Entity(){
            X = 0;
            Y=0;
            cout<<"Constructed entity"<<endl;
        };

        //Entity(float x, float y){
          //      X = x;
           //     Y = y;

        //}


        void Print(){
            cout<<X<<","<<Y<<endl;

        }
// Destructors used here
        ~Entity(){

            cout<<"Destroyed entity"<<endl;
        }


};



int main(){
    Entity e;
    
    e.Print();


}