#include <iostream>

using namespace std;

int main()
{
  float a, b, h, s;

  cout << "a: ";
  cin >> a;
  cout << "b: ";
  cin >> b;
  cout << "h: ";
  cin >> h;

  s = ((a + b) / 2) * h;

  cout << "Partobi aris: " << s << "\n";

  return 0;
}