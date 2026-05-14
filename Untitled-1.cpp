#include <iostream>

using namespace std;

int main(){

int n=4;
int number[n];

    for (int i = 0; i < n; i++){

    cout << "enter number "<<n-i<<":";
cin >> number[i];

    }


cout << "the sum is: " << number[0]+number[1]+number[2]+number[3] << endl;


}