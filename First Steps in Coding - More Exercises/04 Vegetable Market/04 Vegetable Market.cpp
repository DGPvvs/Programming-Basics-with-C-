// 04 Vegetable Market.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

string FormatDoubleNum(double, int);

int main()
{
    const double EuroToLv = 1.94;

    string input;
    getline(cin, input);
    double pricePerKgVigitable = stod(input);

    getline(cin, input);
    double pricePerKgFruct = stod(input);

    getline(cin, input);
    int valueVegitable = stoi(input);

    getline(cin, input);
    int valueFruct = stoi(input);

    string output = string().append(FormatDoubleNum((pricePerKgVigitable * valueVegitable + pricePerKgFruct * valueFruct) / EuroToLv, 2));

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

//Градинар продавал реколтата от градината си на зеленчуковата борса. Продава зеленчуци за N лева на килограм и плодове за M лева за килограм. Напишете програма, която да пресмята приходите от реколтата в евро ( ако приемем, че едно евро е равно на 1.94лв).
//Вход
//От конзолата се четат 4 числа, по едно на ред:
//•	Първи ред – Цена за килограм зеленчуци – реално число[0.00… 1000.00]
//•	Втори ред – Цена за килограм плодове – реално число[0.00… 1000.00]
//•	Трети ред – Общо килограми на зеленчуците – цяло число[0… 1000]
//•	Четвърти ред – Общо килограми на плодовете – цяло число[0… 1000]
//Изход
//Да се отпечата на конзолата едно число: приходите от всички плодове и зеленчуци в евро.
//Резултата да се форматира до втория знак след десетичния разделител.