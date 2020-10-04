#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
  int primeLimit = 100;
  vector <int> primeList;
  int primeNumber;

  for (int i = 2; i < primeLimit; i++)
  {
    for (int o = 2; o <= (i/o); o++)
      {
        if (i%o) break;
        if (i > (i/o)) primeList.push_back(primeNumber = i);
      }
  }

  for (int n : primeList) cout << n << " ";

  /*cout << "input data: " << endl;
  int limit;

  for (int w = 0; w < limit; w++)
  {
    int selectIndex;
    cin >> selectIndex;
    cout << primeList[selectIndex];
  }*/

  return 0;
}