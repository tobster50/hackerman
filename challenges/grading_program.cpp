#include <iostream>
using namespace std;

int main ()
{
  int loop = 0;

  do
  {
    cout << "Please insert your score from the programming test: " << endl;
    int score = 0;
    cin >> score;

    if ((score >= 90) && (score <= 100))
      cout << "Congratulations, you got an A" << endl;
    else if ((score >= 80) && (score <= 89))
      cout << "You scored a B! You're pretty good!" << endl;
    else if ((score >= 70) && (score <= 79))
      cout << "You scored a C! Not bad" << endl;
    else if ((score >= 60) && (score <= 69))
      cout << "You scored a D! Good effort" << endl;
    else if ((score >= 0) && (score <= 59))
      cout << "You scored an F. Better luck next time" << endl;

  } while ( loop != 1);
  
}