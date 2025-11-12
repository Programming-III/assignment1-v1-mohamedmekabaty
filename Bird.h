#ifndef BIRD_H_INCLUDED
#define BIRD_H_INCLUDED
#include <iostream>
using namespace std;
#include "Animal.h"
#include "source.cpp"
#include <string>

class Bird::public Animal{
private:
    float wingSpan;
public:
    void setWingSpan();
    float getWingSpan();
};


#endif // BIRD_H_INCLUDED

