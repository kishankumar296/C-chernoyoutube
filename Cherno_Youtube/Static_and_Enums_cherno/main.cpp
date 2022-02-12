#include<stdio.h>
#include<iostream>
#include "includes/Logi.h"

using namespace std;

// Static keyword - 
// 1. Outside of a class - linkage of that symbol will be for that translation unit
// 2. Static variable in a clsas will be shared with all of the instances


struct Entity{
    int x,y;

    void print(){
            cout<<x<<endl;
            cout<<y<<endl;

    }


};

// enum is enumeration : a set of values. Find a set of values 
// Enum just incremnts number by 1
enum Example{
    A=90,B,C
};

int a = 0;
int b = 1;
int c = 2;



extern int s_variable;
int main(){


    cout<<s_variable<<endl;





    Entity e;
    e.x = 3;
    e.y = 5;



    Example value = B;
    cout<<value;

}