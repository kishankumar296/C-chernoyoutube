#include<iostream>
using namespace std;
#include "Food.h"

const char* RecommendMeAFood(char firstletter){
    if (firstletter=='a' || firstletter=='A')
        return "apple";
    else if (firstletter=='B' || firstletter=='b')
        return "banana";
    else if (firstletter=='D' || firstletter=='d')
        return "donut";
    else
        return "nothing, you are fat";

}
