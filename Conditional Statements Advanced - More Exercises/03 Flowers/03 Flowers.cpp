// 03 Flowers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <sstream>

using namespace std;

string FormatDoubleNum(double, int);
bool Contains(string, string);

int main()
{
    const string SPRING_SUMMER = "SpringSummer";
    const string WINTER = "Winter";
    const string SPRING = "Spring";
    const char YES = 'Y';

    string input;
    getline(cin, input);
    int chrysanthemumsCount = stoi(input);

    getline(cin, input);
    int rosesCout = stoi(input);

    getline(cin, input);
    int tulipsCout = stoi(input);
        
    string season;
    getline(cin, season);

    getline(cin, input);
    char isHolly = input[0];

    double price = .0;

    if (Contains(SPRING_SUMMER, season))
    {
        price = chrysanthemumsCount * 2.0 + rosesCout * 4.1 + tulipsCout * 2.5;
    }
    else
    {
        price = chrysanthemumsCount * 3.75 + rosesCout * 4.5 + tulipsCout * 4.15;
    }

    if (isHolly == YES)
    {
        price *= 1.15;
    }

    if (season == SPRING && tulipsCout > 7)
    {
        price *= .95;
    }

    if (season == WINTER && rosesCout > 9)
    {
        price *= .9;
    }

    if (chrysanthemumsCount + rosesCout + tulipsCout > 20)
    {
        price *= .8;
    }

    string output = string().append(FormatDoubleNum((price + 2), 2));

    cout << output << endl;
}

bool Contains(string s, string f)
{
    int idx = s.find(f);
    return idx > -1;
}

string FormatDoubleNum(double number, int precision)
{
    stringstream stream;

    stream.precision(precision);
    stream << fixed;

    stream << number;

    return stream.str();
}

//Магазин за цветя предлага 3 вида цветя: хризантеми, рози и лалета. Цените зависят от сезона.
//Сезон	        Хризантеми	    Рози	        Лалета
//Пролет / Лято	2.00 лв./бр.	4.10 лв./бр.	2.50 лв./бр.
//Есен / Зима	    3.75 лв./бр.	4.50 лв./бр.	4.15 лв./бр.
//В празнични дни цените на всички цветя се увеличават с 15%. Предлагат се следните отстъпки:
//•	За закупени повече от 7 лалета през пролетта – 5% от цената на целият букет.
//•	За закупени 10 или повече рози през зимата – 10% от цената на целият букет.
//•	За закупени повече от 20 цветя общо през всички сезони – 20% от цената на целият букет.
//Отстъпките се правят по така написания ред и могат да се наслагват! Всички отстъпки важат след оскъпяването за празничен ден!
//Цената за аранжиране на букета винаги е 2лв. Напишете програма, която изчислява цената за един букет.
//Вход
//Входът се чете от конзолата и съдържа точно 5 реда:
//•	На първия ред е броят на закупените хризантеми – цяло число в интервала [0 ... 200]
//•	На втория ред е броят на закупените рози – цяло число в интервала [0 ... 200]
//•	На третия ред е броят на закупените лалета – цяло число в интервала [0 ... 200]
//•	На четвъртия ред е посочен сезона – [Spring, Summer, Аutumn, Winter]
//•	На петия ред е посочено дали денят е празник – [Y – да / N - не]
//Изход
//Да се отпечата на конзолата 1 число – цената на цветята, форматирана до вторият знак след десетичната запетая.