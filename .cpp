#include <iostream>
#include <fstream>
#include ".h"

using namespace std;
using namespace stooph;

int main() {
    cout << "hello my friends" << endl;
    char mop='x';
    cout << "enter a char" << endl;
    cin >> mop;
    cout << mop << " is good." << endl;
    ofstream poopy("../char.txt");
    poopy << mop << endl;
}