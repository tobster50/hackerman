#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
  vector<int> result;
  
  cout << "input data: " << endl;
  int counter = 0;
  cin >> counter;

  for (int i = 0; i < counter; i++)
  {
    float value1 = 0;
    float value2 = 0;

    cin >> value1 >> value2;
    float sum = value1 / value2;
    float answer = round(sum);

    result.push_back(answer);
  }

  for (int n : result) cout << n << " ";

  return 0;
}