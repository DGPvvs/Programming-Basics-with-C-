// 03 Logistics.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

#define NEW_LINE "\r\n"
#define PERSENT "%"

string FormatDoubleNum(double, int);

int main()
{
    const double priceMinibus = 200.0;
    const double priceTruck = 175.0;
    const double priceTrain = 120.0;

    string input;
    getline(cin, input);
    int numberGoods = stoi(input);

    int loadMinibus = 0;
    int loadTruck = 0;
    int loadTrain = 0;

    for (int i = 1; i <= numberGoods; i++)
    {
        getline(cin, input);
        int tonnageLoad = stoi(input);

        if (tonnageLoad <= 3)
        {
            loadMinibus += tonnageLoad;
        }
        else if (tonnageLoad <= 11)
        {
            loadTruck += tonnageLoad;
        }
        else
        {
            loadTrain += tonnageLoad;
        }

    }

    double tottalLoad = (loadMinibus + loadTruck + loadTrain) * 1.0;
    double totalPrice = (loadMinibus * priceMinibus + loadTruck * priceTruck + loadTrain * priceTrain) / tottalLoad;

    string output = string().append(FormatDoubleNum(totalPrice, 2))
                            .append(NEW_LINE)
                            .append(FormatDoubleNum(((loadMinibus / tottalLoad) * 100.0), 2))
                            .append(PERSENT)
                            .append(NEW_LINE)
                            .append(FormatDoubleNum(((loadTruck / tottalLoad) * 100.0), 2))
                            .append(PERSENT)
                            .append(NEW_LINE)
                            .append(FormatDoubleNum(((loadTrain / tottalLoad) * 100.0), 2))
                            .append(PERSENT);

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

//Отговаряте за логистиката на различни товари. В зависимост от теглото на товара е нужно различно превозно средство.
//Цената на тон, за която се превозва товара е различна за всяко превозно средство:
//•	До 3 тона – микробус(200 лева на тон)
//•	От 4 до 11 тона – камион(175 лева на тон)
//•	12 и повече тона – влак (120 лева на тон)
//Вашата задача е да изчислите средната цена на тон превозен товар, както и процента на тоновете  превозвани с всяко превозно средство, спрямо общото тегло(в тонове) на всички товари.
//Вход
//От конзолата се четат поредица от числа, всяко на отделен ред:
//•	На първия ред – броя на товарите за превоз – цяло число в интервала [1...1000]
//•	За всеки един товар на отделен ред – тонажа на товара – цяло число в интервала [1...1000]
//Изход
//Да се отпечатат на конзолата 4 реда, както следва:
//•	Първи ред – средната цена на тон превозен товар (закръглена до втория знак след дес. запетая);
//•	Втори ред – процентът тона превозвани с микробус (процент между 0.00% и 100.00%);
//•	Трети ред – процентът  тона превозвани с камион (процент между 0.00% и 100.00%);
//•	Четвърти ред – процентът тона превозвани с влак (процент между 0.00% и 100.00%).
