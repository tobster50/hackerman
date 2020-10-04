#include <iostream>
#include <vector>

using namespace std;

int main()
{
  vector <int> values;

  values.push_back(3);
  values.push_back(4);
  values.push_back(6);
  values.push_back(11);
  values.push_back(23);

  cout << "Vector: ";

  for (unsigned int i = 0; i < values.size(); i++)
  {
    cout << values[i] << " ";
  }
  cout << endl;

  return 0;

}