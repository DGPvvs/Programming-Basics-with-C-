// 11 Odd_Even Position.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <cmath>
#include <sstream>

using namespace std;

#define NEW_LINE "\r\n"

string FormatDoubleNum(double, int);

int main()
{
    string input;
    getline(cin, input);
    int n = stoi(input);

    double oddSum = .0;
    double oddMin = .0;
    double oddMax = .0;

    double evenSum = .0;
    double evenMin = .0;
    double evenMax = .0;

    bool isFirstOdd = true;
    bool isFirstEven = true;

    for (int i = 1; i <= n; i++)
    {
        getline(cin, input);
        double num = stod(input);

        evenSum += num * (1 - i % 2);
        oddSum += num * (i % 2);

        if (i % 2 == 0)
        {
            if (isFirstEven)
            {
                isFirstEven = false;
                evenMax = evenMin = num;
            }
            else
            {
                evenMin = min(num, evenMin);
                evenMax = max(num, evenMax);
            }
        }
        else
        {
            if (isFirstOdd)
            {
                isFirstOdd = false;
                oddMax = oddMin = num;
            }
            else
            {
                oddMin = min(num, oddMin);
                oddMax = max(num, oddMax);
            }
        }
    }

    string output = string().append("OddSum=")
                            .append(FormatDoubleNum(oddSum, 2)).append(",")
                            .append(NEW_LINE)
                            .append(isFirstOdd ? "OddMin=No," : string().append("OddMin=").append(FormatDoubleNum(oddMin, 2)).append(","))
                            .append(NEW_LINE)
                            .append(isFirstOdd ? "OddMax=No," : string("OddMax=").append(FormatDoubleNum(oddMax, 2)).append(","))
                            .append(NEW_LINE)
                            .append("EvenSum=").append(FormatDoubleNum(evenSum, 2)).append(",")
                            .append(NEW_LINE)
                            .append(isFirstEven ? "EvenMin=No," : string("EvenMin=").append(FormatDoubleNum(evenMin, 2)).append(","))
                            .append(NEW_LINE)
                            .append(isFirstEven ? "EvenMax=No" : string("EvenMax=").append(FormatDoubleNum(evenMax, 2)))
                            .append(NEW_LINE);

    cout << output;
}

string FormatDoubleNum(double number, int precision)
{
    stringstream stream;

    stream.precision(precision);
    stream << fixed;

    stream << number;

    return stream.str();
}

//Напишете програма, която чете n-на брой числа, въведени от потребителя, и пресмята сумата, минимума и максимума на числата на четни и нечетни позиции (броим от 1). Когато няма минимален / максимален елемент, отпечатайте "No". 
//Изходът да се форматира в следния вид:
//"OddSum=" + { сума на числата на нечетни позиции},
//"OddMin=" + { минимална стойност на числата на нечетни позиции } / {“No”},
//"OddMax=" + { максимална стойност на числата на нечетни позиции } / {“No”},
//"EvenSum=" + { сума на числата на четни позиции },
//"EvenMin=" + { минимална стойност на числата на четни позиции } / {“No”},
//"EvenMax=" + { максимална стойност на числата на четни позиции } / {“No”}
//Всяко число трябва да е форматирано до втория знак след десетичната запетая.