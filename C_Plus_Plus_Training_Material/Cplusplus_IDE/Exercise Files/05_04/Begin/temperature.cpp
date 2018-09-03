#include "stdafx.h"
#include <iostream>
using namespace std;

int main() {
    cout << "Enter the temperature in (F): ";
    int temp;
    cin >> temp;

    if (temp > 80) {
        cout << "It is hot" << endl;
    }
    if (temp > 70) {
        cout << "It is great" << endl;
    }

    if (temp > 55) {
        cout << "It is chilly" << endl;
    }

    if (temp > 32) {
        cout << "It is cold" << endl;
    } else {
        cout << "It is freezing" << endl;
    }
    return 0;
}