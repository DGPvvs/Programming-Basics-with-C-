// 05 Number 100_200.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    const string Less100 = "Less than 100";
    const string Else = "Between 100 and 200";
    const string Great200 = "Greater than 200";

    const int Hundred = 100;
    const int TwoHundred = 200;

    int input;
    cin >> input;

    string output = input < Hundred ? Less100 : input > TwoHundred ? Great200 : Else;
    cout << output << endl;
}

//Да се напише програма, която чете цяло число, въведено от потребителя и проверява дали е под 100, между 100 и 200 или над 200. Ако числото е:
//•	под 100 отпечатайте: "Less than 100"
//•	между 100 и 200 отпечатайте: "Between 100 and 200"
//•	над 200 отпечатайте: "Greater than 200"
