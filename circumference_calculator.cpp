#include <iostream>
using namespace std;

void circleCalculate()
{
    const double pi = 22.0 / 7;
    double inputRadius1;
    double inputRadius2;
    double inputRadius3;

    cout << "Calculating Area... " << endl;

    cout << "Please provide first radius value" << endl;
    cin >> inputRadius1;

    cout << "Please provide second radius value" << endl;
    cin >> inputRadius2;

    cout << "Calculating Circumference... " << endl;

    cout << "Please provide radius value" << endl;
    cin >> inputRadius3;

    cout << "Calculation completed" << endl;

    int areaResult  = pi * inputRadius1 * inputRadius2;
    cout << "Area of Circle: " << areaResult << endl;

    int circumferenceResult = 2 * pi * inputRadius3;
    cout << "Circumference of Circle " << circumferenceResult << endl;
}

int main ()
{
    cout << "This program will calculate the area and circumference based on radius values you provide" << endl;
    circleCalculate();
    return 0;
}