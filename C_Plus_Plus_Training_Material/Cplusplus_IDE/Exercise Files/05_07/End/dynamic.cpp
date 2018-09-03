#include “stdafx.h”
#include <iostream>
using namespace std;

int main() {
    auto counter = 0;
    auto totalScores = 0.0;
    auto finished = false;
    
    while(!finished){
        string input = "";
        cout << "Enter a test score, (0 to stop): ";
        cin >> input;
        auto score = stod(input);
        finished = score == 0;
        
        if(!finished) {
            totalScores += score;
            counter++;
        }
    }
    cout << "Read " << counter << " scores" << endl;
    cout << "Average score = " << (totalScores / counter) << endl;
    
    return 0;
}