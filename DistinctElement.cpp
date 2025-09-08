//Write a program to count the total number of distinct elements in an array of length n.

#include <iostream>
#include <set>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    set<int> distinct;  // stores unique elements

    for (int i = 0; i < n; i++) {
        distinct.insert(arr[i]);  // duplicates ignored
    }

    cout << "Total number of distinct elements = " << distinct.size() << endl;

    return 0;
}