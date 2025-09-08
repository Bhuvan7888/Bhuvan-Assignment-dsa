#include <iostream>
#include <string>
#include <algorithm> // for reverse()
using namespace std;

int main() {
    string str;

    cout << "Enter a string: ";
    getline(cin, str);

    // Reverse using STL function
    reverse(str.begin(), str.end());

    cout << "Reversed string: " << str << endl;

    return 0;
}