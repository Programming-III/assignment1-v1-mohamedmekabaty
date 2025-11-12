#ifndef ANIMAL_H_INCLUDED
#define ANIMAL_H_INCLUDED
#include <iostream>
using namespace std;
#include <string>


class Animal{
private:
    string name;
    int age;
    bool isHungry;

public:
    void setName(string name);
    void setAge(int age);
    void setIsHungry(bool isHungry);
    string getName();
    int getAge();
    bool getIsHungry();

    void display();
    void feed();
};


#endif // ANIMAL_H_INCLUDED
