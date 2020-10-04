#include <iostream>
#include <cmath>
using namespace std;

double Add (double value1, double value2);
double Subtract (double value1, double value2);
double Multiply (double value1, double value2);
double Divide (double value1, double value2);
double Modulus (double value1, double value2);

int main ()
{
  int loop = 1;

  while (loop = 1)
  {
    cout << "Menu: " << endl;
    cout << "1. Add" << endl;
    cout << "2. Subtract" << endl;
    cout << "3. Multiply" << endl;
    cout << "4. Divide" << endl;
    cout << "5. Modulus" << endl;

    cout << "Please input which operator you wish to use (1-5)" << endl;
    int operatorChoice = 0;
    cin >> operatorChoice;

    double value1 = 0;
    double value2 = 0;

    switch (operatorChoice)
    {
    case 1:
      cout << "Please enter your two numbers: " << endl;
      cin >> value1 >> value2;
      cout << "The result is: " << Add(value1,value2) << endl;
      continue;
    case 2:
      cout << "Please enter your two numbers: " << endl; 
      cin >> value1 >> value2;
      cout << "The result is: " << Subtract(value1,value2) << endl;
      continue;
    case 3:
      cout << "Please enter your two numbers: " << endl; 
      cin >> value1 >> value2;
      cout << "The result is: " << Multiply(value1,value2) << endl;
      continue;
    case 4:
      cout << "Please enter your two numbers: " << endl; 
      cin >> value1 >> value2;
      cout << "The result is: " << Divide(value1,value2) << endl;
      continue;
    case 5:
      cout << "Please enter your two numbers: " << endl; 
      cin >> value1 >> value2;
      cout << "The result is: " << Modulus(value1,value2) << endl;
      continue;
    default:
      cout << "Invalid input, please try again" << endl;
      break;
    }  
  }
  return 0;
}

double Add (double value1, double value2)
{
  return value1 + value2;
};
double Subtract (double value1, double value2)
{
  return value1 = value2;
};
double Multiply (double value1, double value2)
{
  return value1 * value2;
};
double Divide (double value1, double value2)
{
  return value1 / value2;
};
double Modulus (double value1, double value2)
{
  return std::fmod(value1,value2);
};