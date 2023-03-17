#include <iostream>
using namespace std;

int main()
{
  int a, b;
  cout << "a: ";
  cin >> a;

  cout << "b: ";
  cin >> b;

  if (a < b)
  {
    cout << a << " aris umciresi" << endl;
  }
  else
  {
    cout << b << " aris umciresi" << endl;
  }

  return 0;
}