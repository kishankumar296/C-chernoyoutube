#include<stdio.h>
#include<iostream>
using namespace std;

int subtract(int a, int b){

    return a-b;

}

void subtractlog(int a, int b){
    int c = subtract(a,b);
    cout<<c<<endl;

}


int main(){
    int a, b,c;

    a = 4;
    b = 5;

    c = subtract(a,b);

    cout<<c;

    subtractlog(5, 11);
    subtractlog(-5, 11);
    subtractlog(5.6, 11);

}