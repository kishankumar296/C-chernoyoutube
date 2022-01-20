#include<iostream>
using namespace std;
#include"includes/Log.h"

void InitLog(){
    Log("Initializing log");

}

void Log(const char* message){
    cout<<message<<endl;


}
