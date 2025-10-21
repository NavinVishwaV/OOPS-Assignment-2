#include <iostream>
using namespace std;

class SimpleList {
private:
    int arr[100];
    int size;

public:
    SimpleList() {
        size = 0;
    }

    void add(int value) {
        if (size < 100) {
            arr[size] = value;
            size++;
        } else {
            cout << "List is full!" << endl;
        }
    }

    void remove() {
        if (size > 0) {
            size--;
        } else {
            cout << "List is empty!" << endl;
        }
    }

    void display() {
        cout << "List elements: ";
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    int getSize() {
        return size;
    }
};

int main() {
    SimpleList myList;

    myList.add(10);
    myList.add(20);
    myList.add(30);

    myList.display();
    cout << "Size: " << myList.getSize() << endl;

    myList.remove();
    myList.display();
    cout << "Size: " << myList.getSize() << endl;

    return 0;
}