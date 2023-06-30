#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstring>

void sortArray(int *arr, int size)
{
  for (int i = 0; i < size - 1; ++i)
  {
    for (int j = i + i; j < size; ++j)
    {
      if (arr[i] < arr[j])
      {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = arr[i];
      }
    }
  }
}

int main()
{
  int nums[10];
  srand(time(NULL));

  for (int i = 0; i < 10; ++i)
  {
    nums[i] = rand() % 100;
    std::cout << nums[i] << " ";
  }
  std::cout << "\n";

  sortArray(nums, 10);

  // int number = 4;
  // switch (number)
  // {
  // case 1:
  //   std::cout << ""
  // default:

  // }
  std::string s1 = "Hello";
  std::string s2 = "World";

  int compResult = strcmp(s1.c_str(), s2.c_str());

  std::cout << compResult << "\n";

  // გადაწერეთ პირველი სტრინგის პირველი 5 სიმბოლო მეორე სტრინგის ბოლოს და დაბეჭდეთ საჭირო შედეგი შეტყობინებით.
  s2 += s1.substr(0, 5);
  std::cout << "New string: " << s2 << "\n";

  // დაბეჭდეთ პირველი სტრინგის პირველი სიმბოლოს რიცხვითი მნიშვნელობა.
  std::cout << "Numberic value of the first string's 1st char: " << static_cast<int>(s1[0]) << "\n";

  // მეორე სტრინგი გადაიყვანეთ UperCase_ში
  for (auto & c : s2) c = toupper(c);

  std::cout << s2 << "\n";

}