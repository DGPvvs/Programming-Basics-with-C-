// 02 Bike Race.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <sstream>

using namespace std;

string FormatDoubleNum(double, int);

int main()
{
    const string TRAIL = "trail";
    const string CROSS_COUNTRY = "cross-country";
    const string ROAD = "road";

    string input;
    getline(cin, input);
    int juniorsCount = stoi(input);

    getline(cin, input);
    int seniorsCount = stoi(input);

    string traceType;
    getline(cin, traceType);

    double price = .0;

    if (traceType == TRAIL)
    {
        price = juniorsCount * 5.5 + seniorsCount * 7.0;
    }
    else if (traceType == CROSS_COUNTRY)
    {
        price = juniorsCount * 8.0 + seniorsCount * 9.5;

        if (juniorsCount + seniorsCount >= 50)
        {
            price *= .75;
        }
    }
    else if (traceType == ROAD)
    {
        price = juniorsCount * 20.0 + seniorsCount * 21.5;
    }
    else
    {
        price = juniorsCount * 12.25 + seniorsCount * 13.75;
    }

    price = price * .95;

    string output = string().append(FormatDoubleNum(price, 2));

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

//Предстои Вело състезание за благотворителност в което участниците са разпределени в младша("juniors") и старша("seniors") група.Парите се набавят от таксата за участие на велосипедистите. Според възрастовата група и вида на трасето на което ще се провежда състезанието, таксата е различна.
//Група	    trail	cross-country	downhill	road
//juniors	    5.50	8	            12.25	    20
//seniors	    7	    9.50	        13.75	    21.50
//Ако в "cross-country" състезанието се съберат 50 или повече участника(общо младши и старши), таксата намалява с 25%. Организаторите отделят 5% процента от събраната сума за разходи.
//Вход
//От конзолата се четат 2 числа и един стринг, всяко на отделен ред:
//•	Първият ред – броят младши велосипедисти. Цяло число в интервала [1…100]
//•	Вторият ред – броят старши велосипедисти. Цяло число в интервала [1… 100]
//•	Третият ред – вид трасе – "trail", "cross-country", "downhill" или "road"
//Изход
//Да се отпечата на конзолата едно число:
//"{дарената сума}" - форматирана с точност до 2 знака след десетичната запетая.
