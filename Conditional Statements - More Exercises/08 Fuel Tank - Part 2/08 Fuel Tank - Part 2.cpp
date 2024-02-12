// 08 Fuel Tank - Part 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

string FormatDoubleNum(double, int);

int main()
{
    const string Gas = "Gas";
    const string Gasoline = "Gasoline";
    const string Diesel = "Diesel";
    const string Yes = "Yes";

    const double priceGasoline = 2.22;
    const double priceDiesel = 2.33;
    const double priceGas = 0.93;

    string fuelType;
    getline(cin, fuelType);

    string input;
    getline(cin, input);
    double fuelCount = stod(input);

    string isHaveCard;
    getline(cin, isHaveCard);

    double price = .0;

    bool isDiscont = isHaveCard == Yes;

    if (fuelType == Gas)
    {
        price = priceGas * fuelCount;
        if (isDiscont)
        {
            price -= .08 * fuelCount;
        }
    }
    else if (fuelType == Gasoline)
    {
        price = priceGasoline * fuelCount;
        if (isDiscont)
        {
            price -= .18 * fuelCount;
        }
    }
    else
    {
        price = priceDiesel * fuelCount;
        if (isDiscont)
        {
            price -= .12 * fuelCount;
        }
    }

    if (fuelCount > 25)
    {
        price *= (1.0 - .1);
    }
    else if (fuelCount >= 20)
    {
        price *= (1.0 - .08);
    }

    string output = string().append(FormatDoubleNum(price, 2))
                            .append(" lv.");

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

//Напишете програма, която да изчислява, колко ще струва на един шофьор да напълни резервоара на автомобила си, като знаете – какъв тип гориво зарежда, каква е цената за литър гориво и дали разполага с карта за отстъпки. Цените на горивата са както следва: 
//•	Бензин – 2.22 лева за един литър,
//•	Дизел – 2.33 лева за един литър
//•	Газ – 0.93 лева за литър
//Ако водача има карта за отстъпки, той се възползва от следните намаления за литър гориво: 18 ст.за литър бензин, 12 ст. за литър дизел и 8 ст. за литър газ. 
//Ако шофьора е заредил между 20 и 25 литра включително, той получава 8 процента отстъпка от крайната цена, при повече от 25 литра гориво, той получава 10 процента отстъпка от крайната цена.
//Вход
//Входът се чете от конзолата и се състои от 3 реда:
//•	Типа на горивото – текст с възможности: "Gas", "Gasoline" или "Diesel"
//•	Количество гориво – реално число в интервала [1.00 … 50.00]
//•	Притежание на клубна карта – текст с възможности: "Yes" или "No"
//Изход
//На конзолата трябва да се отпечата един ред.
//•	"{крайната цена на горивото} lv."
//Цената на горивото да бъде форматираната до втората цифра след десетичния знак.