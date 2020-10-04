#include <iostream>
using namespace std;

int main ()
{
  cout << "I will calculate the power of number based on your number choice and power of choice" << endl;

  cout << "Please insert your number" << endl;
  int num1 = 0;
  cin >> num1;

  cout << num1 << "to the power of..." << endl;

  int powerOf = 0;
  cin >> powerOf;

  int result = 1;

  for (int i = 0; i < powerOf ; i++)
  {
    result = result * num1;
  }

  cout << "The power of " << num1 << " is " << result << endl;

  return 0; 
}