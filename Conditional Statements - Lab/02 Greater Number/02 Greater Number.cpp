// 02 Greater Number.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#define _USE_MATH_DEFINES

#include <math.h>

using namespace std;

int main()
{
    int num1, num2;
    cin >> num1 >> num2;

    int result = max(num1, num2);

    cout << result << endl;
}

//Да се напише програма, която чете две цели числа, въведени от потребителя и отпечатва по-голямото от двете.