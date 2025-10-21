#include <iostream>
using namespace std;

class Person {
public:
    char name[30];
    Person(const char* n) {
        int i = 0;
        for (i = 0; n[i] != '\0' && i < 29; ++i) {
            name[i] = n[i];
        }
        name[i] = '\0';
    }
    void identify() const {
        cout << "I am a Person named " << name << endl;
    }
};

class Athlete {
public:
    int worldRanking;
    Athlete(int w) : worldRanking(w) {}
    void identify() const {
        cout << "I am an Athlete ranked " << worldRanking << endl;
    }
};

class SportsPerson : public Person, public Athlete {
private:
    char sport[30];
public:
    SportsPerson(const char* n, int w, const char* s)
        : Person(n), Athlete(w) {
        int i = 0;
        for (i = 0; s[i] != '\0' && i < 29; ++i) {
            sport[i] = s[i];
        }
        sport[i] = '\0';
    }

    void displayDetails() const {
        cout << "--- SportsPerson Details ---" << endl;
        
        Person::identify();
        Athlete::identify();
        
        cout << "Sport: " << sport << endl;
    }
};

int main() {
    SportsPerson sp("Bolt", 1, "Sprinting");
    sp.displayDetails();
    
    sp.Person::identify();

    return 0;
}