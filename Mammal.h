#ifndef MAMMAL_H_INCLUDED
#define MAMMAL_H_INCLUDED
#include <iostream>
using namespace std;
#include "Animal.h"
#include "source.cpp"
#include <string>

class Mammal::public Animal{
private:
    string furColor;
public:
    void setfurColor(string furColor);
    string getfurColor();
};


#endif // MAMMAL_H_INCLUDED
