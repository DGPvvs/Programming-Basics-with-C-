// 04 Transport Price.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

string FormatDoubleNum(double, int);

int main()
{
    const string DAY = "day";

    string input;
    getline(cin, input);
    int n = stoi(input);

    string period;
    getline(cin, period);

    double tax = .7;

    if (period == DAY)
    {
        tax += .79 * n;
    }
    else
    {
        tax += .9 * n;
    }

    if (n >= 20)
    {
        if (tax > .09 * n)
        {
            tax = .09 * n;
        }
    }

    if (n >= 100)
    {
        if (tax > .06 * n)
        {
            tax = .06 * n;
        }
    }

    string output = string().append(FormatDoubleNum(tax, 2));

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

//Студент трябва да пропътува n километра. Той има избор измежду три вида транспорт:
//•	Такси.Начална такса: 0.70 лв.Дневна тарифа: 0.79 лв. / км.Нощна тарифа: 0.90 лв. / км.
//•	Автобус.Дневна / нощна тарифа: 0.09 лв. / км.Може да се използва за разстояния минимум 20 км.
//•	Влак. Дневна / нощна тарифа: 0.06 лв. / км.Може да се използва за разстояния минимум 100 км.
//Напишете програма, която въвежда броя километри n и период от деня (ден или нощ) и изчислява цената на най-евтиния транспорт.
//Вход
//От конзолата се четат два реда:
//•	Първият ред съдържа числото n – брой километри – цяло число в интервала [1…5000]
//•	Вторият ред съдържа дума “day” или “night” – пътуване през деня или през нощта
//Изход
//Да се отпечата на конзолата най-ниската цена за посочения брой километри, форматирана до втория знак след десетичния разделител.