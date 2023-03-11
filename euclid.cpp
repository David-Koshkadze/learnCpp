#include <iostream>

using namespace std;

int main() {
  int a;
  int b;

  cout << "Enter first number: " << endl;

  cin >> a;

  cout << "Enter second number: " << endl;

  cin >> b;

  while (b > 0) {
    int r = a % b;
    a = b;
    b = r;
  }

  cout << a << endl;
}