#include "animal.h"

int main() {
    animal obj1("tom", 4, "meow");
    animal obj2("jerry", 4, "Cheese");

    animal* obj3 = new animal("killer", 4, "woof");

    obj3->talk();

    cout << "\n" << obj3->name << endl;
    cout << obj1.name << endl;
    cout << obj2.name << endl;
    return 0;
}