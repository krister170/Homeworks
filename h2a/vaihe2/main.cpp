#include <iostream>
using namespace std;

// Rectangle-luokka
class Rectangle {
private:
    double width;
    double height;

public:

    double getArea() {
        return width * height;
    }


    double getCircum() {
        return 2 * (width + height);
    }


    void setWidth(double w) {
        width = w;
    }


    void setHeight(double h) {
        height = h;
    }
};

int main() {

    Rectangle* myRectangle = new Rectangle();


    myRectangle->setWidth();
    myRectangle->setHeight();


    cout << "Area: " << myRectangle->getArea() << endl;
    cout << "Circumference: " << myRectangle->getCircum() << endl;


    delete myRectangle;

    return 0;
}
