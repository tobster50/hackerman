#include <iostream>
using namespace std;

//function declaration
int DemoConsoleOutput();

int main()
{
  DemoConsoleOutput();

  return 0;
}

// Define DemoConsoleOutput
int DemoConsoleOutput()
{
  cout << "This is a simple string literal" << endl;
  cout << "Writing number five: " << 5 << endl;
  cout << "Performing division 10 / 5 = " << 10 / 5 << endl;
  cout << "Pi when approximated is 22 / 7 = " << 22 / 7 << endl;
  cout << "Pi is 22 / 7 = " << 22.0 / 7 << endl;
  cout << "Performing subtraction 10 - 5 = " << 10 - 5 << endl;
  cout << "Performing multiplication 10 x 5 = " << 10  * 5 << endl;

  return 0;
}