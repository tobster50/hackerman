#include <iostream>
using namespace std;

class Shape
{
  public:
    int width;
    int height;

  int Area()
  {
    return width*height;
  }   
};

int main()
{
  Shape Rectangle1;
  
  cout << "Enter width of Rectangle" << endl;
  cin >> Rectangle1.width;
  cout << "Enter height of Rectangle" << endl;
  cin >> Rectangle1.height;
  cout << "Area: " << Rectangle1.Area();

  return 0;
}