// 01 Back To The Past.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

string FormatDoubleNum(double, int);

int main()
{
    string input;
    getline(cin, input);
    double inheritedMoney = stod(input);

    getline(cin, input);
    int year = stoi(input);

    int age = 18;

    for (int i = 1800; i <= year; i++)
    {
        inheritedMoney = (i % 2) == 0
            ? inheritedMoney - 12000
            : inheritedMoney - (12000 + (50 * age));

        age++;
    }

    string output = string();

    if (inheritedMoney >= 0)
    {
        output.append("Yes! He will live a carefree life and will have ")
              .append(FormatDoubleNum(inheritedMoney, 2))
              .append(" dollars left.");
    }
    else
    {
        inheritedMoney *= (-1.0);
        output.append("He will need ")
              .append(FormatDoubleNum(inheritedMoney, 2))
              .append(" dollars to survive.");
    }

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

//Иванчо е на 18 години и получава наследство, което се състои от X сума пари и машина на времето.
//Той решава да се върне до 1800 година, но не знае дали парите ще са достатъчни, за да живее без да работи.
//Напишете програма, която пресмята, дали Иванчо ще има достатъчно пари, за да не се налага да работи до дадена година включително.
//Като приемем, че за всяка четна (1800, 1802 и т.н.) година ще харчи 12 000 лева.
//За всяка нечетна (1801,1803  и т.н.) ще харчи 12 000 + 50 * [годините, които е навършил през дадената година].
//Вход
//Входът се чете от конзолата и съдържа точно 2 реда:
//•	Наследените пари – реално число в интервала [1.00 ... 1 000 000.00]
//•	Годината, до която трябва да живее (включително) – цяло число в интервала [1801 ... 1900]
//Изход
//Да се отпечата на конзолата 1 ред. Сумата трябва да е форматирана до два знака след десетичната запетая:
//•	Ако парите са достатъчно:
//o "Yes! He will live a carefree life and will have {N} dollars left." – където N са парите, които ще му останат.
//•	Ако парите НЕ са достатъчно:
//o "He will need {М} dollars to survive." – където M е сумата, която НЕ достига.