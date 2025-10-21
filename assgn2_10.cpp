#include <iostream>
using namespace std;

class Shape {
public:
    virtual double area() const = 0; 
    
    virtual void displayInfo() const {
        cout << "This is a generic shape." << endl;
    }
};

class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}
    
    double area() const {
        return 3.14159 * radius * radius;
    }

    void displayInfo() const {
        cout << "Circle (Radius: " << radius << ")" << endl;
    }
};

class Square : public Shape {
private:
    double side;
public:
    Square(double s) : side(s) {}

    double area() const {
        return side * side;
    }
    
    void displayInfo() const {
        cout << "Square (Side: " << side << ")" << endl;
    }
};

int main() {
    Circle c(5.0);
    Square s(4.0);

    Shape* shapePtr;

    shapePtr = &c;
    shapePtr->displayInfo();
    cout << "Area: " << shapePtr->area() << endl;

    shapePtr = &s;
    shapePtr->displayInfo();
    cout << "Area: " << shapePtr->area() << endl;

    return 0;
}