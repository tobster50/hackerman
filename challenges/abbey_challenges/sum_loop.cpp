#include <iostream>
using namespace std;

int main()
{
  cout << "Input data" << endl;
  int valueAmount = 0;
  cin >> valueAmount;

  int values = 0;
  int sum = 0;

  for (int i = 0; i < valueAmount; i++)
  {
    cin >> values;
    sum = sum + values;
    continue;
  }

  cout << "Answer: " << sum << endl;
  return 0;
}