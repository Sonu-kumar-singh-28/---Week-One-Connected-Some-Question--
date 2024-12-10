#include<iostream>
using namespace std;

int main() {
    int a, b, c;

    cout << "Enter the first number: ";
    cin >> a;

    cout << "Enter the second number: ";
    cin >> b;

    cout << "Enter the third number: ";
    cin >> c;

    if (a + b > c && a + c > b && b + c > a) {
        cout << "Valid Triangle" << endl;
    } else {
        cout << "Not a valid Triangle" << endl;
    }

    return 0;
}