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

int main(){
    using namespace std::string_literals;

    string name0 = "Chrno"s + "helloo"; // add s in between to add two strings
    name0[3] = 's'; 

    cout<<name0<<endl;

    const char* ex = R"(Line1
    Line2
    Line 3
    Line4)"; // Letter R ignores escape characters 

    cout<<ex<<endl;
    const char name[8] = "Chno\0oo";
    cout<< strlen(name) <<endl;

    const wchar_t* name2 = L"Cherno";
    const char16_t* name3 = u"Cherno";
    const char32_t* name4 = U"Cherno";
}

