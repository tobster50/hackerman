#include <iostream>
using namespace std;

//three global integers
int firstNumber = 0;
int secondNumber = 0;
int multiplicationResult = 0;

void MultiplyNumbers ()
{
  cout << "Enter the first number: ";
  cin >> firstNumber;

  cout << "Enter the second number: ";
  cin >> secondNumber;

  // multiply number and store in a variable
  multiplicationResult = firstNumber * secondNumber;

  //display result
  cout << firstNumber << " x " << secondNumber;
  cout << " = " << multiplicationResult << endl;  
}

int main()
{
  cout << "This program will help you multiply two numbers" << endl;

  //call function that does the work
  MultiplyNumbers();

  cout << "Displaying from main(): ";

  //display result from main
  cout << firstNumber << " x " << secondNumber;
  cout << " = " << multiplicationResult << endl; 

  return 0;
}