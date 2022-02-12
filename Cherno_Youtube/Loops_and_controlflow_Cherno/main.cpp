#include<stdio.h>
#include<iostream>
#include "includes/Logi.h"

using namespace std;

// Tutorials for header files, loops and control flow continue, break etc;
// Tutorial for https://www.youtube.com/watch?v=9RJTQmK0YPI&list=PLlrATfBNZ98dudnM48yfGUldqGD0S4FFb&index=10
// Tutorial for https://www.youtube.com/watch?v=_1AwR-un4Hk&list=PLlrATfBNZ98dudnM48yfGUldqGD0S4FFb&index=14
// Tutorial for https://www.youtube.com/watch?v=a3IZ8WaIFAA&list=PLlrATfBNZ98dudnM48yfGUldqGD0S4FFb&index=15

// To include headers use g++ -o main.exe main.cpp includes/calculation.cpp

int main(){

    InitLog();
    for (int i=0; i<5;i++){

        if (i%2==0)
        {
            Log("Hello boss, headers are working fine");
            cout<<i<<endl;
        }
        
        // Log("Hello boss, headers are working fine"); // Control flow statements are continue, break etc.
    }
    cin.get();

    int i =0;
    while(i<5){
         Log("Hello boss, headers are working fine");
         i++;

    }
}