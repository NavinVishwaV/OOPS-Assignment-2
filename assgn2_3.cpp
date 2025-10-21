#include <iostream>
using namespace std;

class Shape {
protected:
    double width;
    double height;
public:
    Shape() : width(0), height(0) {}
    Shape(double w, double h) : width(w), height(h) {}

    void setDimensions(double w, double h) {
        width = w;
        height = h;
    }
    
    double calculateArea() const { return 0.0; }
    double calculatePerimeter() const { return 0.0; }

    void displayDimensions() const {
        cout << "Width = " << width << ", Height = " << height << endl;
    }
};

class Rectangle : public Shape {
public:
    Rectangle(double w, double h) : Shape(w, h) {}

    double calculateArea() const {
        return width * height;
    }

    double calculatePerimeter() const {
        return 2 * (width + height);
    }
    
    void displayDetails() const {
        cout << "Rectangle:" << endl;
        displayDimensions();
        cout << "Area: " << calculateArea() << endl;
        cout << "Perimeter: " << calculatePerimeter() << endl;
    }
};

int main() {
    Rectangle rect(10.0, 5.0);
    rect.displayDetails();
    
    cout << "---" << endl;
    rect.setDimensions(7.5, 3.0);
    rect.displayDetails();

    return 0;
}s