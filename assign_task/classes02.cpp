#include <iostream>

using namespace std;

class Samkutxedi

{

  int perimetri; // დახურული ცვლადები

  double fartobi;

public:
  int gverdi1; // ღია ცვლადები

  int gverdi2;

  int gverdi3;

} Sam1, Sam2;

int main()

{

  int Sam1_perimetri, Sam2_perimetri;

  // Sam1 ობიექტის ცვლადებს ენიჭება მნიშვნელობები

  cin >> Sam1.gverdi1 >> Sam1.gverdi2 >> Sam1.gverdi3;

  // Sam2 ობიექტის ცვლადებს ენიჭება მნიშვნელობები

  cin >> Sam2.gverdi1 >> Sam2.gverdi2 >> Sam2.gverdi3;

  // თითოეული სამკუთხედის პერიმეტრის გამოთვლა

  Sam1_perimetri = Sam1.gverdi1 + Sam1.gverdi2 + Sam1.gverdi3;

  Sam2_perimetri = Sam2.gverdi1 + Sam2.gverdi2 + Sam2.gverdi3;

  cout << Sam1_perimetri << endl;

  cout << Sam2_perimetri << endl;

  // system("pause");

  return 0;
}