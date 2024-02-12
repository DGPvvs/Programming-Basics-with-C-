// 05 Game Of Intervals.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

#define NEW_LINE "\r\n"
#define PERSENT "%"

string FormatDoubleNum(double, int);

int main()
{
    int countInterval09, countInterval1019, countInterval2029, countInterval3039, countInterval4050, countNegative;

    countInterval09 = countInterval1019 = countInterval2029 = countInterval3039 = countInterval4050 = countNegative = 0;

    double result = 0.0;

    string input;
    getline(cin, input);
    int moves = stoi(input);

    for (int i = 1; i <= moves; i++)
    {
        string input;
        getline(cin, input);
        int checkedNumbers = stoi(input);

        if ((checkedNumbers < 0) || (checkedNumbers > 50))
        {
            countNegative++;
            result /= 2;
        }
        else if (checkedNumbers <= 9)
        {
            countInterval09++;
            result += checkedNumbers * .2;
        }
        else if (checkedNumbers <= 19)
        {
            countInterval1019++;
            result += checkedNumbers * .3;
        }
        else if (checkedNumbers <= 29)
        {
            countInterval2029++;
            result += checkedNumbers * .4;
        }
        else if (checkedNumbers <= 39)
        {
            countInterval3039++;
            result += 50;
        }
        else
        {
            countInterval4050++;
            result += 100;
        }

    }
    string percentNewLine = string().append(PERSENT).append(NEW_LINE);

    string output = string().append(FormatDoubleNum(result, 2))
                            .append(NEW_LINE)
                            .append("From 0 to 9: ")
                            .append(FormatDoubleNum(((countInterval09 * 100) / (1.0 * moves)), 2))
                            .append(percentNewLine)
                            .append("From 10 to 19: ")
                            .append(FormatDoubleNum(((countInterval1019 * 100) / (1.0 * moves)), 2))
                            .append(percentNewLine)
                            .append("From 20 to 29: ")
                            .append(FormatDoubleNum(((countInterval2029 * 100) / (1.0 * moves)), 2))
                            .append(percentNewLine)
                            .append("From 30 to 39: ")
                            .append(FormatDoubleNum(((countInterval3039 * 100) / (1.0 * moves)), 2))
                            .append(percentNewLine)
                            .append("From 40 to 50: ")
                            .append(FormatDoubleNum(((countInterval4050 * 100) / (1.0 * moves)), 2))
                            .append(percentNewLine)
                            .append("Invalid numbers: ")
                            .append(FormatDoubleNum(((countNegative * 100) / (1.0 * moves)), 2))
                            .append(percentNewLine);

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

//Напишете програма, която да пресмята резултата от игра.
//Първо получавате число, което показва колко хода ще продължи играта.
//После за всеки ход на играта ще получавате по едно ново число.
//Според интервала в който попада числото се прибавят точки.
//Ако числото е отрицателно или по-голямо 50, тогава то е невалидно.
//В началото на играта резултата е 0 и на всеки ход се прибавят точки по следният начин:

//•	От 0 до 9  20 % от числото
//•	От 10 до 19  30 % от числото
//•	От 20 до 29  40 % от числото
//•	От 30 до 39  50 точки
//•	От 40 до 50  100 точки
//•	Невалидно число  резултата се дели на 2

//Освен резултата програмата трябва да изкарва статистика за проценти числа в дадените интервали.
//Вход
//Входът се чете от конзолата:
//•	Първи ред - колко хода ще има по време на играта – цяло число в интервала [1...100]
//•	За всеки ход – числата, които се проверяват в кой интервал са – цели числа в интервала [-100...100]
//Изход
//Да се отпечата на конзолата 7 реда:
//•	1ви ред: "{Краен резултат}"
//•	2ри ред: "From 0 to 9: {процент в интервала}%"
//•	3ти ред: "From 10 to 19: {процент в интервала}%"
//•	4ти ред: "From 20 to 29: {процент в интервала}%"
//•	5ти ред: "From 30 to 39: {процент в интервала}%"
//•	6ти ред: "From 40 to 50: {процент в интервала}%"
//•	7ми ред: "Invalid numbers: {процент в интервала}%"
//Всички числа трябва да са форматирана до вторият знак след запетаята.
