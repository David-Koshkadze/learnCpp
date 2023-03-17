#include <iostream>

// using namespace std;

int main()
{
  float l, cube_volume;

  std::cout << "Enter the side length of the cube: ";
  std::cin >> l;

  cube_volume = l * l * l;

  std::cout << "The volume of the cube is: " << cube_volume << std::endl;

  return 0;
}
