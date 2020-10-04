#include <iostream>
using namespace std;

int main()
{
  cout << "Input two integers and I will return the sum" << endl;
  int num1, num2 = 0;
  cin >> num1 >> num2;

  int result = num1 + num2;

  cout << "The result is: " << result << endl;
  return 0;
}