#include <iostream>

using namespace std;

int main()
{
  double sum = 0.0;
  int numerator = 1;
  int denominator = 3;

  while (numerator <= 95 && denominator <= 97)
  {
    sum += static_cast<double>(numerator) / denominator;

    numerator += 2;
    denominator += 2;
  }

  std::cout << "The sum of the series is: " << sum << std::endl;

  return 0;
}
