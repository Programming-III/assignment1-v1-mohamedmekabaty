#ifndef REPTILE_H_INCLUDED
#define REPTILE_H_INCLUDED
#include <iostream>
using namespace std;
#include "Animal.h"
#include "source.cpp"
#include <string>

class Reptile:Animal{
private:
    bool isVenomous;
public:
    void setIsVenomous(bool isVenomous);
    bool getIsVenomous();
};



#endif // REPTILE_H_INCLUDED
