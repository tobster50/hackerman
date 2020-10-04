#include <iostream>
using namespace std;

class myProblem
{
  public:
    int value1; 
    int value2;

    myProblem(int number1, int number2)
      {
        number1 = value1;
        number2 = value2;
        cout << "object created" << endl; 
      }  
  
      int getResult ()
      {
        return value1 + value2;
      } 
};

int main()
{
  int input1;
  int input2;

  myProblem problem(input1, input2);
  cout << "Input value 1" << endl;
  cin >> problem.value1;
  cout << "Input value 2" << endl;
  cin >> problem.value2;
  cout << "Answer is: " << problem.getResult();

  return 0;

}