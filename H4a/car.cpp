#include "Car.h"
#include <iostream>

Car::Car() : model(""), brand("") {}

Car::Car(const std::string& model, const std::string& brand) : model(model), brand(brand) {}

void Car::setEngine(const Engine& engine) {
    objEngine = engine;
}

void Car::setWheels(const Wheel& wheel) {
    objWheel1 = objWheel2 = objWheel3 = objWheel4 = wheel;
}

std::string Car::getModel() const {
    return model;
}

void Car::setModel(const std::string& model) {
    this->model = model;
}

std::string Car::getBrand() const {
    return brand;
}

void Car::setBrand(const std::string& brand) {
    this->brand = brand;
}

void Car::printDetails() const {
    std::cout << "Car Details:" << std::endl;
    std::cout << "Brand: " << brand << std::endl;
    std::cout << "Model: " << model << std::endl;
    std::cout << "Engine Horsepower: " << objEngine.getHorsepower() << std::endl;
    std::cout << "Engine Displacement: " << objEngine.getDisplacement() << std::endl;
    std::cout << "Wheel Size: " << objWheel1.getSize() << " inches" << std::endl;
    std::cout << "Wheel Type: " << objWheel1.getType() << std::endl;
}
