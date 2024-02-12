// 05 Journey.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    const string Bulgaria = "Bulgaria";
    const string Balkans = "Balkans";
    const string Europe = "Europe";

    const string Summer = "summer";

    const string Camp = "Camp";
    const string Hotel = "Hotel";

    double budget;
    string season;
    cin >> budget >> season;

    string place = Hotel;
    string destination = Europe;
    double spendPercentWinter = .9;
    double spendPercentSummer = .9;

    if (budget <= 100)
    {
        spendPercentWinter = .7;
        spendPercentSummer = .3;
        destination = Bulgaria;
    }
    else if (budget <= 1000)
    {
        spendPercentWinter = .8;
        spendPercentSummer = .4;
        destination = Balkans;
    }

    double spendPrice = spendPercentWinter;

    if (season == Summer && destination != Europe)
    {
        place = Camp;
        spendPrice = spendPercentSummer;
    }

    double price = budget * spendPrice;
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    cout << "Somewhere in " << destination << endl << place << " - " << price << endl;
}

//Странно, но повечето хора си плануват от рано почивката.Млад програмист разполага с определен бюджет и свободно време в даден сезон.Напишете програма, която да приема на входа бюджета и сезона, а на изхода да изкарва, къде ще почива програмиста и колко ще похарчи.
//Бюджета определя дестинацията, а сезона определя колко от бюджета ще изхарчи.Ако е лято ще почива на къмпинг, а зимата в хотел.Ако е в Европа, независимо от сезона ще почива в хотел.Всеки къмпинг или хотел, според дестинацията, има собствена цена която отговаря на даден процент от бюджета :
//•	При 100лв.или по - малко – някъде в България
//o	Лято – 30 % от бюджета
//o	Зима – 70 % от бюджета
//•	При 1000лв.или по малко – някъде на Балканите
//o	Лято – 40 % от бюджета
//o	Зима – 80 % от бюджета
//•	При повече от 1000лв.– някъде из Европа
//o	При пътуване из Европа, независимо от сезона ще похарчи 90 % от бюджета.
//Вход
//Входът се чете от конзолата и се състои от два реда, въведени от потребителя :
//•	Първи ред – Бюджет, реално число в интервала[10.00...5000.00].
//•	Втори ред –  Един от двата възможни сезона : "summer" или "winter"
//Изход
//На конзолата трябва да се отпечатат два реда.
//•	Първи ред – "Somewhere in {дестинация}" измежду "Bulgaria", "Balkans" и "Europe"
//•	Втори ред – "{Вид почивка} – {Похарчена сума}"
//o	Почивката може да е между "Camp" и "Hotel"
//o	Сумата трябва да е закръглена с точност до вторият знак след десетичната запетая