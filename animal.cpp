#include "animal.h"

void animal::talk()
{
    cout << "The " + animal::name + " makes " + animal::sound;
};

animal::animal(string n, int l, string s)
{
    this->name = n;
    this->noOfLegs = l;
    this->sound = s;
}