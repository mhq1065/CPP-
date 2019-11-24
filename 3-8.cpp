#include <iostream>
#include <string>
using namespace std;

class Pet {
    string name;

public:
    Pet(string name) : name(name){};
    virtual void speak() = 0;
    virtual string getname() { return this->name; };
    virtual ~Pet(){};
};
class Dog : public Pet {
public:
    Dog(string name) : Pet(name){};
    virtual void speak() {
        cout << "My name is " << this->getname() << ",I can wang wang" << endl;
    }
    ~Dog(){};
};
class Cat : public Pet {
public:
    Cat(string name) : Pet(name){};

    virtual void speak() {
        cout << "My name is " << this->getname() << ",I can miao miao" << endl;
    }
};
int main() {
    Pet *dog = new Dog("Doggy");
    dog->speak();
    Pet *cat = new Cat("Catty");
    cat->speak();
    delete dog;
    delete cat;
    return 0;
}