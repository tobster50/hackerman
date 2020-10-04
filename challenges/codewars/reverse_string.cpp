#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
  cout << "input your string: " << endl;
  string input;
  cin >> input; 

  reverse(input.begin(),input.end()); 
  cout << input;

return 0;
};