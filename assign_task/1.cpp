#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <cmath>

class Student
{
private:
  int searchScore;
  std::string students[5] = {"John", "Alice", "Bob", "Eve", "Charlie"};
  int scores[5][5];

  void populateScoresArray()
  {
    srand(time(NULL));

    for (int i = 0; i < 5; ++i)
    {
      for (int j = 0; j < 5; ++j)
      {
        scores[i][j] = rand() % 101;
      }
    }
  }

  void sortScores()
  {
    for (int i = 0; i < 5; ++i)
    {
      std::sort(scores[i], scores[i] + 5);
    }
  }

  int findMatch()
  {
    for (int i = 0; i < 5; ++i)
    {
      for (int j = 0; j < 4; ++j)
      {
        if (scores[i][j] == scores[i][j + 1])
        {
          return i;
        }
      }
    }
    return -1;
  }

public:
  Student(int searchScore) : searchScore(searchScore)
  {
    populateScoresArray();
    sortScores();

    int matchIndex = findMatch();
    if (matchIndex != -1)
    {
      std::cout << "Match found in student " << matchIndex << std::endl;
    }
    else
    {
      std::cout << "No match found in any student." << std::endl;
    }

    for (int i = 0; i < 5; ++i)
    {
      int maxScore = scores[i][4];
      std::cout << "Max score for student " << i << ": " << maxScore << std::endl;
    }

    int remainingSum = 0;
    for (int i = 0; i < 5; ++i)
    {
      for (int j = 0; j < 5; ++j)
      {
        if (j != searchScore)
        {
          remainingSum += scores[i][j];
        }
      }
    }
    std::cout << "Sum of remaining scores: " << remainingSum << std::endl;

    double average = std::cbrt(remainingSum / (5.0 * 4.0));
    std::cout << "Average from 3rd root: " << average << std::endl;
  }
};

int main()
{
  Student student(2);

  return 0;
}
