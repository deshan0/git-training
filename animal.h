#include "libraries.h"

class animal
{
    public:
        string name;
        int noOfLegs;
        string sound;
        void talk();

        animal(string n, int l, string s); // overloaded constructor
    private:
        string type;
};
