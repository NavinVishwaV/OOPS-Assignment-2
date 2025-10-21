#include <iostream>
using namespace std;

class Printer {
public:
    void print(int i) {
        cout << "Overloading: Printing INTEGER: " << i << endl;
    }

    void print(double d) {
        cout << "Overloading: Printing DOUBLE: " << d << endl;
    }
    
    virtual void displayType() const {
        cout << "Polymorphism: Base Class Printer" << endl;
    }
};

class ColorPrinter : public Printer {
public:
    void displayType() const {
        cout << "Polymorphism: Derived Class ColorPrinter" << endl;
    }
};

int main() {
    Printer baseP;
    ColorPrinter derivedP;

    baseP.print(100);    
    baseP.print(5.5);    

    Printer* pPtr = &derivedP; 

    pPtr->displayType(); 

    return 0;
}