// 01 Match Tickets.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

string FormatDoubleNum(double, int);

int main()
{
    const double priceVIP = 499.99;
    const double priceNormal = 249.99;

    const string VIP = "VIP";

    string input;
    getline(cin, input);
    double budget = stod(input);

    string category;
    getline(cin, category);

    getline(cin, input);
    int countHumman = stoi(input);

    double transportPrice = countHumman < 5
        ? budget * .75
        : countHumman < 10
        ? budget * .6
        : countHumman < 25
        ? budget * .5
        : countHumman < 50
        ? budget * .4
        : budget * .25;

    double ticketPrice = category == VIP
        ? priceVIP * countHumman
        : priceNormal * countHumman;

    double diff = budget - (transportPrice + ticketPrice);

    string output = string();

    if (diff >= 0)
    {
        output.append("Yes! You have ")
            .append(FormatDoubleNum(diff, 2))
            .append(" leva left.");
    }
    else
    {
        output.append("Not enough money! You need ")
            .append(FormatDoubleNum(((-1.0) * diff), 2))
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

//Когато пуснали билетите за Евро 2016, група запалянковци решили да си закупят. Билетите имат две категории с различни цени:
//•	VIP – 499.99 лева.
//•	Normal – 249.99 лева.
//Запалянковците имат определен бюджет, а броят на хората в групата определя какъв процент от бюджета трябва да се задели за транспоОт 1 до 4 – 75% от бюджета.
//•	От 5 до 9 – 60% от бюджета.
//•	От 10 до 24 – 50% от бюджета.
//•	От 25 до 49 – 40% от бюджета.
//•	50 или повече – 25% от бюджета.
//Напишете програма, която да пресмята дали с останалите пари от бюджета могат да си купят билети за избраната категория. И колко пари ще им останат или ще са им нужни.
//Вход
//Входът се чете от конзолата и съдържа точно 3 реда:
//•	На първия ред е бюджетът – реално число в интервала [1 000.00 ... 1 000 000.00]
//•	На втория ред е категорията – "VIP" или "Normal"
//•	На третия ред е броят на хората в групата – цяло число в интервала [1 ... 200]
//Изход
//Да се отпечата на конзолата един ред:
//•	Ако бюджетът е достатъчен:
//o "Yes! You have {останалите пари на групата} leva left."
//•	Ако бюджетът НЕ Е достатъчен:
//o "Not enough money! You need {сумата, която не достига} leva."
//Сумите трябва да са форматирани с точност до два знака след десетичната запетая.
