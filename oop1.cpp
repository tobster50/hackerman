#include <iostream>
#include <string>
using namespace std;

class Human 
{
  public: 
    string name;
    int age;

    void IntroduceSelf()
    {
      cout << "I am " + name + " and am ";
      cout << age << " years old" << endl;
    }
};

int main()
{
  Human firstMan;
  firstMan.name = "Toby";
  firstMan.age = 25;

  Human firstWoman;
  firstWoman.name = "Farisza";
  firstWoman.age = 24;

  firstMan.IntroduceSelf();
  firstWoman.IntroduceSelf();
}