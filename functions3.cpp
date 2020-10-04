#include <iostream>
using namespace std;

double Area (double radius, double pi = 3.14);

int main()
{
  cout << "Enter radius" << endl;
  double radius = 0;
  cin >> radius;
  
  cout << "Pi is 3.14, would you like to change the value of pi? y/n" << endl;
  char changePi = 'n';
  cin >> changePi;

  double circleArea = 0;
  if (changePi == 'y')
  {
    cout << "Enter new pi: " << endl;
    double newPi = 3.14;
    cin >> newPi;
    circleArea = Area(radius,newPi);
  }
  else
  {
      circleArea = Area(radius);

      cout << "Area is: " << circleArea << endl;

      return 0;
  }
}

  double Area(double radius, double pi)
  {
    return pi * radius * radius;
  }
