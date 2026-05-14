#include <iostream>
#include <string>
using namespace std;

struct Member {
    string name;
    int age;
};

string toLowerCase(string str) {
    for (int i = 0; i < str.length(); i++)
        str[i] = tolower(str[i]);
    return str;
}

void bubbleSort(Member family[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (toLowerCase(family[j].name) > toLowerCase(family[j + 1].name)) {
                Member temp = family[j];
                family[j] = family[j + 1];
                family[j + 1] = temp;
            }
        }
    }
}

int binarySearch(Member family[], int size, string keyName) {
    int low = 0;
    int high = size - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (toLowerCase(family[mid].name) == toLowerCase(keyName))
            return mid;
        else if (toLowerCase(family[mid].name) < toLowerCase(keyName))
            low = mid + 1;
        else
            high = mid - 1;
    }

    return -1;
}

int main() {
    int n;

    cout << "How many family members do you want to enter? ";
    cin >> n;
    cin.ignore();

    Member family[n];

    for (int i = 0; i < n; i++) {
        cout << "Enter name of member " << i + 1 << ": ";
        getline(cin, family[i].name);
        cout << "Enter age of " << family[i].name << ": ";
        cin >> family[i].age;
        cin.ignore();
    }

    bubbleSort(family, n);

    cout << "\nFamily members sorted alphabetically:" << endl;
    for (int i = 0; i < n; i++)
        cout << "  " << family[i].name << " - Age " << family[i].age << endl;

    string key;
    cout << "\nEnter the name to search: ";
    getline(cin, key);

    int result = binarySearch(family, n, key);

    if (result != -1)
        cout << "FOUND: '" << family[result].name << "' was found and is aged " << family[result].age << endl;
    else
        cout << "NOT FOUND: '" << key << "' was not found." << endl;

    return 0;
}