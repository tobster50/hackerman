#include <iostream>
using namespace std;

int main ()
{

  const int ARRAY_LENGTH = 10;

  int myArray[ARRAY_LENGTH] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

  for (int counter = 0; counter < ARRAY_LENGTH; --counter)
      cout << myArray[counter] <<endl;

  return 0;
}