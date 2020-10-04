#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
  vector<int> result;

  cout << "input data:" << endl;
  int counter = 0;
  cin >> counter; 

  for (int i = 0; i < counter; i++)
  {
    float fahrenheit = 0;
    cin >> fahrenheit;
    float sum1 = fahrenheit - 32;
    float sum2 = sum1 * 5 / 9;
    float answer = round(sum2);

    result.push_back(answer);
  }

  for (int n : result) cout << n << " ";

  return 0;
}