#include <iostream>
using namespace std;

class Person {
protected:
    char name[30];
    int age;
public:
    Person(const char* n, int a) : age(a) {
        int i = 0;
        for (i = 0; n[i] != '\0' && i < 29; ++i) {
            name[i] = n[i];
        }
        name[i] = '\0';
    }
    
    void displayPersonInfo() const {
        cout << "Name: " << name << ", Age: " << age;
    }
};

class Employee : public Person {
protected:
    int employeeID;
public:
    Employee(const char* n, int a, int id)
        : Person(n, a), employeeID(id) {}

    void displayEmployeeInfo() const {
        displayPersonInfo();
        cout << ", ID: " << employeeID;
    }
};

class Manager : public Employee {
private:
    int teamSize;
public:
    Manager(const char* n, int a, int id, int ts)
        : Employee(n, a, id), teamSize(ts) {}

    void displayManagerInfo() const {
        cout << "--- Manager Details ---" << endl;
        displayEmployeeInfo();
        cout << ", Team Size: " << teamSize << endl;
    }
};

int main() {
    Manager mgr("Alice", 45, 1001, 15);

    mgr.displayManagerInfo();

    return 0;
}