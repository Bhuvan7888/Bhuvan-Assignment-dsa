#include <iostream>
#include <string>
#include <algorithm>  // for sort()
using namespace std;

int main() {
    string str;

    cout << "Enter a string: ";
    getline(cin, str);

    // Sort characters in ascending order
    sort(str.begin(), str.end());

    cout << "Sorted string: " << str << endl;

    return 0;
}