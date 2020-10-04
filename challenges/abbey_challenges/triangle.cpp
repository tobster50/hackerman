#include<iostream>
#include<vector>
#include <cmath>

using namespace std;

int main()
{
  vector <int> result;
  int answer;
  
  cout << "Input data: " << endl;
  int limit = 0;
  cin >> limit;

  for (int i = 0; i < limit; i++)
  {
    int value1, value2, value3;
    cin >> value1 >> value2 >> value3; 

    if ((value1 + value2 > value3) && (value1 + value3 > value2) && (value2 + value3 > value1))
      result.push_back(answer = 1);
    
    else
    {
      result.push_back(answer = 0); 
    }
    
  }

  cout << "Answer: " << endl;
  for (int n : result) cout << n << " ";

  return 0;
}