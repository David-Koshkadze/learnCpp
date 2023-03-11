#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a = 2, b = 5, c = 2;
    double x1, x2;  

    double d = b*b - 4*a*c;

    if (d > 0) {
        x1 = (-b + sqrt(d)) / (2*a);
        x2 = (-b - sqrt(d)) / (2*a);

        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    } else if (d == 0) {
        x1 = -b/(2*a);
        cout << "x1 = " << x1 << endl;
    } else if (d < 0) {
       cout << "No real answer" << endl;
    }

    return 0;
}