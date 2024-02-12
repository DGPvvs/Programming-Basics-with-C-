// 10 Multiply by 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

#define NEW_LINE "\r\n"

string FormatDoubleNum(double, int);

int main()
{
    const int Multiplicer = 2;

    string output = string();

    string input;
label: getline(cin, input);

    double num = stod(input);

    if (num >= 0)
    {
        output.append("Result: ")
              .append(FormatDoubleNum((num * Multiplicer), 2))
              .append(NEW_LINE);
        goto label;
    }

    output.append("Negative number!")
          .append(NEW_LINE);

    cout << output << endl;
}

string FormatDoubleNum(double number, int precision)
{
    stringstream stream;

    stream.precision(precision);
    stream << fixed;

    stream << number;

    return stream.str();
}

//Напишете програма, която да умножава положителни числа по 2.
//От конзолата се четат поредица от реални числа, всяко на нов ред, докато не се въведе отрицателно.
//След всяко умножено число на нов ред да се отпечата "Result: {резултата от умножението}".
//Резултата от умножението да бъде форматиран до втория знак след десетичния разделител.
//При получаване на негативно число, на конзолата да се отпечата "Negative number!" и програмата да приключи изпълнение.