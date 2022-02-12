#include<stdio.h>
#include<iostream>
#include "includes/Logi.h"

using namespace std;

// Tutorials for Pointers and References;
//Cherno
// To include headers use g++ -o main.exe main.cpp includes/calculation.cpp

void increment(int value){
    value++;

}

void incrementpointer(int* value){
    (*value)++;

}

void incrementreference(int& value){
    value++;

}

int main(){
    int var = 8; 
    void* ptr = &var; // Invalid pointer because 0 is not a valid memory address
    
    cout<<ptr;

    // References already HAVE to refer an existing variable unlike pointer which can be created 
    // 

    int a =5;
    increment(a);

    int& ref = a; // Reference to an existing operator
    int* b = &a+2 ; // Pointer
    ref = 2;
    cout<<ref<<endl;
    cout<<b<<endl;
    cout<<a<<endl;



    incrementpointer(&a);
    cout<<"Printing using pointer " <<a<<endl;

    // Ref variable will not be created 



    //Using references//
    incrementreference(a);
    cout<<"Printing using references " <<a<<endl;

    // Once you declare a reference, you cannot change what it reference
    // The below code is invalid reference has to be immediately needs to be initialized
    // int a =5;
    // int b =7;
    // int& ref = a;
    // ref = b;

    // Changing the value of reference pointer
     int c =5;
     int d =8;

     int* ref1 = &c;
     *ref1 = 2;
     cout<<c<<endl;

      ref1 = &d;
     *ref1 = 1;
     cout<<d;   


}