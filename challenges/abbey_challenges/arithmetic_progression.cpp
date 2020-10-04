#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
  vector<int> result;

  cout << "Input data: " << endl;
  int counter = 0;
  cin >> counter;

  for (int i = 0; i < counter; i++)
  {
    int start_value = 0;
    int increment_by = 0;
    int sum = 0;
    
    int repeat = 0;
    

    cin >> start_value >> increment_by >> repeat;

    for (int r = 0; r < repeat; r++)
    {
      sum += start_value;
      start_value += increment_by;
    }
   
    result.push_back(sum);
  }

  cout << "Answer: " << endl;
  for (int n : result) cout << n << " ";

  return 0;
}
