#include <iostream>
using namespace std;

int main()
{
  cout << "Please select a beverage: " << endl;
  cout << "--------------------------" << endl;
  cout << "1. Water" << endl;
  cout << "2. Coca Cola" << endl;
  cout << "3. Dr Pepper" << endl;
  cout << "4. Sprite" << endl;
  cout << "5. Fanta" << endl;
  cout << "--------------------------" << endl;
  cout << "Input the number for the drink you want (1-5)" << endl;

  int choice = 0;
  cin >> choice;

  switch (choice)
  {
    case 1:
      cout << "You chose Water";
      break;
    case 2:
      cout << "You chose Coca Cola";
      break;
    case 3:
      cout << "You chose Dr Pepper";
      break;
    case 4:
      cout << "You chose Sprite";
      break;
    case 5:
      cout << "You chose Fanta";
      break;
    default:
      cout << "Invalid selection";
      break;
  }
  /* if (choice == 1)
    cout << "You chose Water" << endl;
  else if (choice == 2)
    cout << "You chose Coca Cola" << endl;
  else if (choice == 3)
    cout << "You chose Dr Pepper" << endl;
  else if (choice == 4)
    cout << "You chose Sprite" << endl;
  else if (choice == 5)
    cout << "You chose Fanta" << endl;
  else
    cout << "Invalid selection, please try again" << endl;
 */




  return 0;
}