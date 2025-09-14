//remove all the vowels from the array

#include <iostream>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);   // input lenge

    cout << "String without vowels: ";
    for (int i = 0; i < str.length(); i++) {
        char ch = str[i];

        // 
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            continue; // skip yeh characters
        }

        cout << ch; // print kro only non-vowels
    }

    return 0;
}
