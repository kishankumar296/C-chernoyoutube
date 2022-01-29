#include<stdio.h>
#include<iostream>
#include "includes/Logi.h"

using namespace std;

// Tutorials for Classes and struct;
//Cherno
// To include headers use g++ -o main.exe main.cpp includes/calculation.cpp

#define struct class

class Player{
public:
    int x,y; // variables from class are called objects
    int speed;

// Functions inside classes are called methods
    void Move( int xa, int ya)
    {
        x += xa*speed;
        y += ya*speed;
    }

};


class Logger{

    public:
        const int LogLevelError = 0;
        const int LogLevelWarning = 1;
        const int LogLevelInfo = 2;


    private:
        int m_LogLevel=LogLevelInfo; // m_variable is member variables
    public:
        void SetLevel(int level)
        {
            m_LogLevel = level;
        }

        void Error(const char* message)
        {
            if (m_LogLevel>= LogLevelError)
                cout<<"[WARNING]: " << message << endl;


        }

        void Info(const char* message)
        {
            if (m_LogLevel>= LogLevelInfo)
            cout<<"[WARNING]: " << message << endl;


        }
        void Warn(const char* message)
        {
            if (m_LogLevel>= LogLevelWarning)
            cout<<"[WARNING]: " << message << endl;


        }


};


// Use class when inheritance is necessary


struct vector{
    float x,y;
};

// default variables and functions in class is private and
// default variables and functions in STRUCT is PUBLIC

// When to use struct or class
// 1. Eg. vector class
int main(){
  
  Player player;
  player.x=5;
  player.speed = 10;

  player.Move(1,2);
  cout<<player.x<<endl;
  


  Logger log ;
  log.SetLevel(log.LogLevelError);
  log.Warn("Hello!");
  log.Error("Hello!");
  log.Info("Hello!");
  cin.get();


}