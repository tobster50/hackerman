#include <iostream>
#include <string>
using namespace std;

int main ()
{
  // declare input number variable
  int inputNumber;
  string inputName;

  // cout asks for a value, cin stores input required from unit after it is given
  cout << "Enter an integer: ";
  cin >> inputNumber;

  cout << "Enter your name: ";
  cin >> inputName;

  //after input data is stored, they will now be printed using previously defined variables
  cout << inputName << " entered " << inputNumber << endl;

  return 0;
}