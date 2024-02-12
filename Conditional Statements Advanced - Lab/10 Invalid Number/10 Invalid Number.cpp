// 10 Invalid Number.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    const int ValidLower = 100;
    const int ValidUpper = 200;
    const int ValidZero = 0;

    const string Invalid = "invalid";
    const string Empty = "";

    int num;
    cin >> num;

    string output = (num == ValidZero || (num >= ValidLower && num <= ValidUpper))
        ? Empty
        : Invalid;
    cout << output << endl;
}

//Дадено число е валидно, ако е в диапазона[100…200] или е 0. Да се напише програма, която чете цяло число, въведено от потребителя, и печата "invalid" ако въведеното число не е валидно.