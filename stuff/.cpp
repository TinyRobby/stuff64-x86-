#include <iostream>
#include <fstream>
#include ".h"

using namespace std;
using namespace stooph;

int main( int argc,) {
    cout << "hello my friends" << endl;
    char mop;
    cout << "enter a char" << endl;
    cin >> mop;
    cout << mop << " is good." << endl;
    ofstream poopy("../char.txt");
    poopy << mop << endl;
}