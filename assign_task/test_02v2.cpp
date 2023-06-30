#include <iostream>
#include <cstdlib>
#include <ctime>

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
}