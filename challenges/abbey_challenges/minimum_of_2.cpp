#include <iostream>
#include <vector>
using namespace std;

int main()
{
    cout << "Data:" << endl;
    int limit = 0;
    cin >> limit;

    int result[limit];
    for (int i = 0; i < limit; i++)
    {
        int value1 = 0;
        int value2 = 0;

        cin >> value1 >> value2;

        if (value1 < value2)
            {
                int lowerVal = value1;
                result[i] = lowerVal;
            }
        else if (value2 < value1)
            {
                int lowerVal = value2;
                result[i] = lowerVal;
            }
    continue;
    }

    cout << "Answer: " << endl;

    for (int i = 0; i < limit; i++)
    {
        cout << result[i] << " ";
    }

    return 0;
}