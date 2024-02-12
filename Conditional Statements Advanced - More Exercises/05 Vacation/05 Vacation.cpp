// 05 Vacation.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

string FormatDoubleNum(double, int);

int main()
{
    const string ALASKA = "Alaska";
    const string MOROCCO = "Morocco";
    const string HOTEL = "Hotel";
    const string HUT = "Hut";
    const string CAMP = "Camp";
    const string SUMMER = "Summer";

    string input;
    getline(cin, input);
    double budget = stod(input);

    string seson;
    getline(cin, seson);

    double priceSummer = .0;
    double priceWinter = .0;
    string acomodation = string();

    if (budget <= 1000)
    {
        priceSummer = .65 * budget;
        priceWinter = .45 * budget;
        acomodation = CAMP;
    }
    else if (budget <= 3000)
    {
        priceSummer = .8 * budget;
        priceWinter = .6 * budget;
        acomodation = HUT;
    }
    else
    {
        priceSummer = .9 * budget;
        priceWinter = .9 * budget;
        acomodation = HOTEL;
    }

    string destination = MOROCCO;
    double price = priceWinter;

    if (seson == SUMMER)
    {
        destination = ALASKA;
        price = priceSummer;
    }

    string output = string().append(destination)
                            .append(" - ")
                            .append(acomodation)
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

//Напишете програма, която спрямо даден бюджет и сезон да пресмята цената, локацията и мястото на настаняване за ваканция. Сезоните са лято и зима – "Summer" и "Winter". Локациите са – "Alaska" и "Morocco". Възможните места за настаняване – "Hotel", "Hut" или "Camp".
//•	При бюджет по-малък или равен от 1000лв.:
//o Настаняване в "Camp"
//o	Според сезона локацията ще е една от следните и ще струва определен процент от бюджета:
//	Лято – Аляска – 65 % от бюджета
//	Зима – Мароко – 45 % от бюджета
//•	При бюджет по-голям от 1000лв. и по-малък или равен от 3000лв.:
//o Настаняване в "Hut"
//o	Според сезона локацията ще е една от следните и ще струва определен процент от бюджета:
//	Лято – Аляска – 80 % от бюджета
//	Зима – Мароко – 60 % от бюджета
//•	При бюджет по-голям от 3000лв.:
//o Настаняване в "Hotel"
//o	Според сезона локацията ще е една от следните и ще струва 90% от бюджета:
//	Лято – Аляска
//	Зима – Мароко
//Вход
//Входът се чете от конзолата и се състои от два реда:
//•	Първи ред – Бюджет – реално число в интервала [10.00...10000.00]
//•	Втори ред –  Сезон – текст "Summer" или "Winter"
//Изход
//На конзолата трябва да се отпечатат един ред.
//"{локацията} – {мястото за настаняване} – {цената}"
//Цената трябва да е форматирана до вторият знак след десетичната запетая.