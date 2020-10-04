#include <iostream>
#include <vector>
using namespace std;

int main()
{
  vector<int> result;
  
  cout << "Input number of sums: " << endl;
  int counter = 0;
  cin >> counter;
  
  cout << "Input values to calculate: " << endl;
  for (int i = 0; i < counter; i++)
  {
    int value1= 0;
    int value2= 0;

    cin >> value1 >> value2;
    int sum = value1 + value2;
    result.push_back(sum);
  }

  for (int n : result) cout << n << " ";

  return 0;
}