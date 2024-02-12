// 06 Flower Shop.cpp : This file contains the 'main' function. Program execution begins and ends there.
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
    const double Magnolias = 3.25;
    const double Hyacinths = 4.0;
    const double Roses = 3.5;
    const double Cacti = 8.0;

    string input;
    getline(cin, input);
    int countMagnolias = stoi(input);

    getline(cin, input);
    int countHyacinths = stoi(input);

    getline(cin, input);
    int countRoses = stoi(input);

    getline(cin, input);
    int countCacti = stoi(input);

    getline(cin, input);
    double praceGift = stod(input);

    double diff = (countMagnolias * Magnolias + Hyacinths * countHyacinths + Roses * countRoses + countCacti * Cacti) * .95 - praceGift;

    string output = string();

    if (diff >= 0)
    {
        output.append("She is left with ")
              .append(FormatDoubleNum(floor(diff), 0))
              .append(" leva.");
    }
    else
    {
        output.append("She will have to borrow ")
              .append(FormatDoubleNum(ceil((-1) * diff), 0))
              .append(" leva.");
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

//Мария иска да купи подарък на сина си. Тя работи в магазин за цветя. В магазина идва поръчка за цветя. Напишете програма, която пресмята сумата от поръчката и дали печалбата е достатъчна за подаръка. Цветята имат следните цени:

//•	Магнолии – 3.25 лева
//•	Зюмбюли – 4 лева
//•	Рози – 3.50 лева
//•	Кактуси – 8 лева
//От общата сума, Мария трябва да плати 5% данъци.


//Вход
//Входът се чете от конзолата и се състои от 5 реда:
//•	Брой магнолии – цяло число в интервала [0 … 50]
//•	Брой зюмбюли – цяло число в интервала [0 … 50]
//•	Брой рози – цяло число в интервала [0 … 50]
//•	Брой кактуси – цяло число в интервала [0 … 50]
//•	Цена на подаръка – реално число в интервала [0.00 … 500.00]
//Изход
//На конзолата трябва да се отпечата един ред.
//•	Ако парите СА стигнали: "She is left with {останали} leva." – сумата трябва да е закръглена към по-малко цяло число (пр. 1.90 -> 1).
//•	Ако парите НЕ достигат: "She will have to borrow {останали} leva." – сумата трябва да е закръглена към по-голямо цяло число (пр. 1.10 -> 2).
