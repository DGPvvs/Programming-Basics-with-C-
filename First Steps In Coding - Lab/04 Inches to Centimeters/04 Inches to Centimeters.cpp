// 04 Inches to Centimeters.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    const double base = 2.54;

    double input;

    cin >> input;

    cout << input * base << endl;

    return 0;
}

//Да се напише програма, която чете от конзолата реално число и го преобразува от инчове в сантиметри.
//За целта умножете инчовете по 2.54 (1 инч = 2.54 сантиметра).
