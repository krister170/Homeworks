#include <iostream>
#include <string>

using namespace std;

class Car {
private:

    string brand;
    string model;
    int yearModel;

public:

    Car(string b, string m, int y) : brand(b), model(m), yearModel(y) {}

    void printData() {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << yearModel << endl;
    }
};
