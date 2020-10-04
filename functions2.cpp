#include <iostream>
using namespace std;

const double Pi = 3.14159265;

double SurfaceArea(double radius, double height);

int main ()
{
  cout << "Please enter the radius: " << endl;
  double radius = 0;
  cin >> radius;

  cout << "Please enter the height" << endl;
  double height = 0;
  cin >> height;

  cout << "The surface area is: " << SurfaceArea(radius, height) << endl;
}

double SurfaceArea(double radius, double height)
{
  double area = 2 * Pi * radius * radius + 2 * Pi * radius * height;
  return area;
}