#include<stdio.h>
#include<iostream>
#include "includes/Logi.h"

#include <cstring>

#include <stdlib.h>
using namespace std;

// Tutorials for Constructors, destructors and Inheritance;
// Cherno
// To include headers use g++ -o main.exe main.cpp includes/calculation.cpp

// Arrays 
// 4 is size of each pointer

// Return an array

// Name a pointer only via array if you want to change the name

class Entity{
    private:
        int* m_X, *m_Y;
    public:
        const int* const GetX() const // this method is constant // contents of the pointer and the pointer returned is constant
        {
            return m_X; // Why does the method be declared constant
        }

        void SetX(int x)
        {
            m_X = x;
        }

}

// mutable keyword which can be used if const can be used to modify else not

void PrintEntity(Entity e)
{
    
    cout<<e.GetX()<<endl;



}

int main(){

    const int MAX_AGE = 90;

    //const int* a = new int; // You cannot modify the contents of the pointer
    int const* a = new int; // You cannot modify the contents of the pointer
    int* const a = new int; // Can change the contents of the pointer but cannot reassign the pointer to something else
    *a = 2; // changing contents ofthe pointer

    a = (int*)&MAX_AGE; // Changing the memory address
    cout<< *a << endl;




    cin.get();



}

