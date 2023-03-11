#include <iostream>

using namespace std;

int main() {
    int a;
    int b;

    cout << "Enter first number (a): " << endl;

    cin >> a;

    cout << "Enter second number (b): " << endl;

    cin >> b;

    int temp;   
    temp = a;
    a = b;
    b = temp;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}