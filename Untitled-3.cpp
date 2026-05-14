#include <iostream>
using namespace std;

// Function declaration
int add(int a, int b);

int main() {
    int result;

    result = add(3, 5);

    cout << "Result = " << result;

    return 0;
}

// Function definition
int add(int a, int b) {
    return a + b;
}