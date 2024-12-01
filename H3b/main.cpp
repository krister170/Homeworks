#include <iostream>
using namespace std;

class Animal {
public:
    virtual ~Animal() {
        cout << "Animal tuhoutuu." << endl;
    }
    virtual void callOut() const {
        cout << "Eläin ääntelee." << endl;
    }
};

class Dog : public Animal {
public:
    ~Dog() override {
        cout << "Dog tuhoutuu." << endl;
    }
    void callOut() const override {
        cout << "Koira haukkuu!" << endl;
    }
};

int main() {

    Animal* animal = new Animal();
    animal->callOut();

    Animal* dog = new Dog();
    dog->callOut();


    delete animal;
    delete dog;

    return 0;
}
