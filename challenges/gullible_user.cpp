#include <iostream>
using namespace std;

int main ()
{
  int loop = 11;
  int inputException = 1;

  for (int i = 0; i < loop; i++)
  {
    cout << "Enter any number but " << inputException << endl;
    int choice = 0;
    cin >> choice;

    if (choice == inputException)
    { 
      cout << "Hey, you weren't supposed to input " << inputException << "!" << endl;
      break;
    }
    else if (i == 10)
    {
      cout << "Wow you have more patience than I do" << endl;
      break;
    }
    else
    {
      inputException++;
      continue;
    }
  }
  return 0;
}