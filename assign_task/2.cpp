#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstring>

void sortArrayDescending(int *arr, int size)
{
  for (int i = 0; i < size - 1; ++i)
  {
    for (int j = i + 1; j < size; ++j)
    {
      if (arr[i] < arr[j])
      {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }
}

int main()
{
  srand(time(NULL));
  int arr[10];

  // Filling the array with random numbers
  for (int i = 0; i < 10; ++i)
  {
    arr[i] = rand() % 100;
    std::cout << arr[i] << " ";
  }
  std::cout << std::endl;

  // Sorting the array in descending order
  sortArrayDescending(arr, 10);

  // Printing the sorted array
  for (int i = 0; i < 10; ++i)
  {
    std::cout << arr[i] << " ";
  }
  std::cout << std::endl;

  // Switch statement
  int balance = 4;
  switch (balance)
  {
  case 1:
    std::cout << "Case 1: Balance is 4." << std::endl;
    break;
  case 2:
    std::cout << "Case 2: Balance is 4." << std::endl;
    break;
  case 3:
    std::cout << "Case 3: Balance is 4." << std::endl;
    break;
  default:
    std::cout << "Default case: Balance is not 1, 2, or 3." << std::endl;
    break;
  }

  // String comparison
  std::string str1 = "Hello";
  std::string str2 = "World";

  int comparisonResult = strcmp(str1.c_str(), str2.c_str());
  if (comparisonResult < 0)
  {
    std::cout << "String 1 is less than String 2." << std::endl;
  }
  else if (comparisonResult > 0)
  {
    std::cout << "String 1 is greater than String 2." << std::endl;
  }
  else
  {
    std::cout << "String 1 is equal to String 2." << std::endl;
  }

  // Copying characters and printing result
  str2 += str1.substr(0, 5);
  std::cout << "Concatenated string: " << str2 << std::endl;

  // Printing numeric value of first character
  std::cout << "Numeric value of first character in String 1: " << static_cast<int>(str1[0]) << std::endl;

  // Converting String 2 to uppercase
  for (char &c : str2)
  {
    if (c >= 'a' && c <= 'z')
    {
      c = c - ('a' - 'A');
    }
  }
  std::cout << "Uppercase String 2: " << str2 << std::endl;

  return 0;
}
