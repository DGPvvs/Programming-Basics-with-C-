// 03 Celsius to Fahrenheit.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

double ToFahrenheit(double);
string FormatDoubleNum(double, int);

int main()
{
    string input;
    getline(cin, input);

    double cel = stod(input);

    cout << FormatDoubleNum(ToFahrenheit(cel), 2) << endl;
}

string FormatDoubleNum(double number, int precision)
{
    stringstream stream;

    stream.precision(precision);
    stream << fixed;

    stream << number;

    return stream.str();
}

double ToFahrenheit(double cel)
{
    return cel * 1.8 + 32.0;
}

//Напишете програма, която чете градуси по скалата на Целзий (°C) и ги преобразува до градуси по скалата на Фаренхайт (°F). Потърсете в Интернет подходяща формула, с която да извършите изчисленията. Форматирате изхода до втория знак след десетичната запетая. 
//    °F = °C × 1,8 + 32