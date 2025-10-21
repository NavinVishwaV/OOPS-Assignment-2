#include <iostream>
using namespace std;

class Sorter {
private:
    int data[100];
    int count;

    void swap(int& a, int& b) {
        int temp = a;
        a = b;
        b = temp;
    }

public:
    Sorter() : count(0) {}

    void inputData(int arr[], int size) {
        if (size <= 100) {
            count = size;
            for (int i = 0; i < size; ++i) {
                data[i] = arr[i];
            }
        }
    }

    void displayData() const {
        cout << "Array: ";
        for (int i = 0; i < count; ++i) {
            cout << data[i] << " ";
        }
        cout << endl;
    }

    void bubbleSort() {
        for (int i = 0; i < count - 1; i++) {
            for (int j = 0; j < count - 1 - i; j++) {
                if (data[j] > data[j + 1]) {
                    swap(data[j], data[j + 1]);
                }
            }
        }
    }
};

int main() {
    Sorter mySorter;
    int initial[] = {64, 34, 25, 12, 22, 11, 90};
    int size = 7;

    mySorter.inputData(initial, size);
    cout << "Before Sorting: ";
    mySorter.displayData();

    mySorter.bubbleSort();
    
    cout << "After Bubble Sort: ";
    mySorter.displayData();

    return 0;
}