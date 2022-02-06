#include<stdio.h>
#include<iostream>
#include "includes/Logi.h"
#include <array>
using namespace std;

// Tutorials for Constructors, destructors and Inheritance;
//Cherno
// To include headers use g++ -o main.exe main.cpp includes/calculation.cpp

// Arrays 
// 4 is size of each pointer

// Return an array

class Entity
{
    public:
        int example[5];

    Entity(){
        for (int i =0; i<5;i++)
            example[i] = 2;


    }


};

int main(){

    int example[5]; // array is a pointer which is created in stack memory
    int *ptr = example; // 

    example[0] = 2;
    example[4] = 5;

    for (int i =0; i<5;i++)
        example[i] = 1;

    example[2] = 5;
    *(ptr + 2) = 6; // Adding 2 elements after pointer being example so


    int* another = new int[5]; // Created in heap memeory 

    for (int i =0; i<5;i++)
        another[i] = 2;

    delete[] another;

    array<int,5> another;

    cout<<example[2]<<endl;
    
    
    cout<<another[2]<<endl;
    cout<<"Number of elements is"<<sizeof(example)/sizeof(int);
    cin.get() ; 
}

// lifetimes heap memory: Memory fragmentation