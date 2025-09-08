#include <iostream>
#include <cctype>  
using namespace std;

int main() {
    char ch;
    cout << "Enter an uppercase character: ";
    cin >> ch;

    char lower = tolower(ch);

    cout << "Lowercase character: " << lower << endl;
    return 0;
}