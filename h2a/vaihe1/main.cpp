#include <iostream>
#include <string>
using namespace std;


class Car {
private:
    string brand;
    string model;
    int yearModel;

public:

    void printData() {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << yearModel << endl;
    }


    void setBrand(string b) {
        brand = b;
    }


    void setModel(string m) {
        model = m;
    }


    void setYearModel(int y) {
        yearModel = y;
    }
};

int main() {

    Car* myCar = new Car();


    myCar->setBrand("");
    myCar->setModel("");
    myCar->setYearModel();


    myCar->printData();


    delete myCar;

    return 0;
}
