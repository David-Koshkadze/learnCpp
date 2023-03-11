#include <iostream>

using namespace std;

int main() {
  int a;
  int b;

  cout << "Enter-two integer numbers: " << endl;
  scanf("%d %d", &a, &b);

  cin >> a >> b;

  while (b > 0) {
    int r = a % b;
    a = b;
    b = r;
  }

  cout << a << endl;
}