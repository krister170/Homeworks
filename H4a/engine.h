#ifndef ENGINE_H
#define ENGINE_H

class Engine {
private:
    int horsepower;
    double displacement;

public:
    Engine();
    Engine(int horsepower, double displacement);

    int getHorsepower() const;
    void setHorsepower(int horsepower);

    double getDisplacement() const;
    void setDisplacement(double displacement);
};

#endif
