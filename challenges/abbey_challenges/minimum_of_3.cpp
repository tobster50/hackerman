#include <iostream>
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
        int value3 = 0;

        cin >> value1 >> value2 >> value3;

        if (value1 < value2 && value1 < value3)
            {
               int lowerVal = value1;
               result[i] = value1;
            }
        else if (value2 < value1 && value2 < value3)
            {
                int lowerVal = value2;
                result[i] = value2;
            }
        else
            {
                int lowerVal = value3;
                result[i] = value3;
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