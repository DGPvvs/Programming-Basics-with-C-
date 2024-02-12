// 06 Truck Driver.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

string FormatDoubleNum(double, int);

int main()
{
    const string SUMMER = "Summer";
    const string WINTER = "Winter";
    const double TAX = 1 - .1;

    string season;
    getline(cin, season);


    string input;
    getline(cin, input);
    double kmPerMount = stod(input);

    double profit = 1.45 * kmPerMount;

    if (kmPerMount <= 5000)
    {
        if (season == WINTER)
        {
            profit = 1.05 * kmPerMount;
        }
        else if (season == SUMMER)
        {
            profit = .9 * kmPerMount;
        }
        else
        {
            profit = .75 * kmPerMount;
        }
    }
    else if (kmPerMount <= 10000)
    {
        if (season == WINTER)
        {
            profit = 1.25 * kmPerMount;
        }
        else if (season == SUMMER)
        {
            profit = 1.1 * kmPerMount;
        }
        else
        {
            profit = .95 * kmPerMount;
        }
    }

    profit *= TAX * 4;

    cout << FormatDoubleNum(profit, 2) << endl;
}

string FormatDoubleNum(double number, int precision)
{
    stringstream stream;

    stream.precision(precision);
    stream << fixed;

    stream << number;

    return stream.str();
}

//Напишете програма която пресмята колко пари ще изкара шофьор на ТИР за един сезон. На входа програмата получава през кой сезон ще работи шофьора, както и колко километра на месец ще кара. Един сезон е 4 месеца. Според зависи сезона и броя километри на месец ще му се заплаща различна сума на километър:

//	                                Пролет / Есен   Лято            Зима
//км на месец <= 5000	                0.75 лв./км	    0.90 лв./км	    1.05 лв./км
//5000 < км на месец <= 10000	        0.95 лв./км	    1.10 лв./км	    1.25 лв./км
//10000 < км на месец <= 20000	    1.45 лв./км – за който и да е сезон

//След като са извадени 10% за данъци се отпечатват останалите пари.
//Вход
//Входът се чете от конзолата и се състои от два реда:
//•	Първи ред – Сезон – текст "Spring", "Summer", "Autumn" или "Winter"
//•	Втори ред –  Километри на месец – реално число в интервала [10.00...20000.00]
//Изход
//На конзолата трябва да се отпечатат едно число:
//•	Заплатата на шофьора след данъците, форматирана до втория знак след десетичната запетая.
