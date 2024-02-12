// 04 Car To Go.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

#define NEW_LINE "\r\n"

string FormatDoubleNum(double, int);

int main()
{
    const string CABRIO = "Cabrio";
    const string JEEP = "Jeep";

    const string SUMMER = "Summer";

    const string ECONOMY = "Economy class";
    const string COMPACT = "Compact class";
    const string LUXURY = "Luxury class";

    string input;
    getline(cin, input);
    double budget = stod(input);

    string season;
    getline(cin, season);

    double price = .9 * budget;
    string classa = LUXURY;
    string carType = JEEP;
    bool isNotLuxury = false;

    double priceSummer = .0;
    double priceWinter = .0;

    if (budget <= 100.0)
    {
        priceSummer = .35 * budget;
        priceWinter = .65 * budget;
        classa = ECONOMY;
        isNotLuxury = true;
    }
    else if (budget <= 500.0)
    {
        priceSummer = .45 * budget;
        priceWinter = .80 * budget;
        classa = COMPACT;
        isNotLuxury = true;
    }

    if (isNotLuxury)
    {
        if (season == SUMMER)
        {
            price = priceSummer;
            carType = CABRIO;
        }
        else
        {
            price = priceWinter;
        }
    }

    string output = string(classa)
            .append(NEW_LINE)
            .append(carType)
            .append(" - ")
            .append(FormatDoubleNum(price, 2));

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

//Напишете програма, която спрямо даден бюджет и сезон да пресмята цената, типа и класа на кола под наем.
//Сезоните са лято и зима – "Summer" и "Winter". Типа коли са кабрио и джип – "Cabrio" и "Jeep". 
//•	При бюджет по-малък или равен от 100лв.:
//o Класът ще е - "Economy class"
//o	Според сезона колата и цената ще са:
//	Лято – Кабрио – 35 % от бюджета
//	Зима – Джип – 65 % от бюджета
//•	При бюджет по-голям от 100лв. и по-малък или равен от 500лв.:
//o Класът ще е - "Compact class"
//o	Според сезона колата и цената ще са:
//	Лято – Кабрио – 45 % от бюджета
//	Зима – Джип – 80 % от бюджета
//•	При бюджет по-голям от 500лв.:
//o Класът ще е – "Luxury class"
//o	За всеки сезон колата ще е джип и цената ще е:
//	90 % от бюджета
//Вход
//Входът се чете от конзолата и се състои от два реда:
//•	Първи ред – Бюджет – реално число в интервала [10.00...10000.00]
//•	Втори ред –  Сезон – текст "Summer" или "Winter"
//Изход
//На конзолата трябва да се отпечатат два реда.
//•	Първи ред – "{Вид на класа}"
//o	"Economy class", "Compact class" или "Luxury class"
//•	Втори ред – "{Вид на колата} - {цена на колата}"
//o	Видът на колата – "Cabrio" или "Jeep"
//o	Цената трябва да е форматирана до втория знак след запетаята
