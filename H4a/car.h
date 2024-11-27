#ifndef CAR_H
#define CAR_H

#include <string>
#include "Engine.h"
#include "Wheel.h"

class Car {
private:
    Engine objEngine;
    Wheel objWheel1, objWheel2, objWheel3, objWheel4;
    std::string model;
    std::string brand;

public:
    Car();
    Car(const std::string& model, const std::string& brand);

    void setEngine(const Engine& engine);
    void setWheels(const Wheel& wheel);

    std::string getModel() const;
    void setModel(const std::string& model);

    std::string getBrand() const;
    void setBrand(const std::string& brand);

    void printDetails() const;
};

#endif
