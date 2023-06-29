#include <iostream>
#include <string>

using namespace std;

class Date
{
  int month, day, year;

public:
  Date(int = 1, int = 1, int = 2012);
  ~Date() {}
  void print();
};

class Student
{
  string firstName;
  string lastName;
  Date birthDate;

public:
  Student(string, string, int, int, int);
  ~Student() {}
  void print();
};

void Date::print()
{
  cout << month << '/' << day << '/' << year << endl;
}

Date::Date(int m, int d, int y)
{
  month = m;
  day = d;
  year = y;
}

Student::Student(string fn, string ln, int m, int d, int y)
    : birthDate(m, d, y)
{
  firstName = fn;
  lastName = ln;
}

void Student::print()
{
  cout << firstName << " " << lastName << endl
       << "Daibada: ";
  birthDate.print();
  cout << endl;
}

int main()
{
  cout << "Student klasis objectis sheqmna:" << endl
       << endl;
  Student S("Tamaz", "DoliZe", 2, 25, 1995);
  cout << "Student Object\n"
       << endl;
  S.print();
  cout << "\nDate klasis obieqtebis sheqmna:\n\n";
  Date d1;
  d1.print();
  return 0;
}
