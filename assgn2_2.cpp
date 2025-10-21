#include <iostream>
using namespace std;

struct KeyValuePair {
    int key;
    int value;
};

class SimpleDictionary {
private:
    KeyValuePair pairs[100];
    int count;

public:
    SimpleDictionary() {
        count = 0;
    }

    void insert(int key, int value) {
        for (int i = 0; i < count; i++) {
            if (pairs[i].key == key) {
                pairs[i].value = value;
                cout << "Key " << key << " updated." << endl;
                return;
            }
        }

        if (count < 100) {
            pairs[count].key = key;
            pairs[count].value = value;
            count++;
            cout << "Key " << key << " inserted." << endl;
        } else {
            cout << "Dictionary is full!" << endl;
        }
    }

    int search(int key) const {
        for (int i = 0; i < count; i++) {
            if (pairs[i].key == key) {
                return pairs[i].value;
            }
        }
        return -1;
    }

    void displayAll() const {
        cout << "\nDictionary elements (Key: Value):\n";
        for (int i = 0; i < count; i++) {
            cout << pairs[i].key << ": " << pairs[i].value << endl;
        }
    }
};

int main() {
    SimpleDictionary myDict;

    myDict.insert(101, 5);
    myDict.insert(102, 12);
    myDict.insert(101, 20);

    myDict.displayAll();

    cout << "\nValue for key 102: " << myDict.search(102) << endl;
    cout << "Value for key 999: " << myDict.search(999) << endl;

    return 0;
}