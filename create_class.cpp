#include <iostream>
using namespace std;

class Student
{
  int rollNumber;
  int age;

};

int main()
{
  Student s1;
  Student s2;
  Student s3;

  Student *s4 = new Student;

  s1.age = 24;
  s1.rollNumber = 100;

  return 0;
}