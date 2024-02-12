// 03 Harvest.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <cmath>
#include <sstream>

using namespace std;

#define NEW_LINE "\r\n"

string FormatDoubleNum(double, int);

int main()
{
    const double kgPerLiter = 2.5;
    const double percentForWine = .4;

    string input;
    getline(cin, input);
    int x = stoi(input);

    getline(cin, input);
    double y = stod(input);

    getline(cin, input);
    int z = stoi(input);

    getline(cin, input);
    int worksCount = stoi(input);

    double producedWine = x * y * percentForWine / kgPerLiter;

    double diff = producedWine - z;

    string output = string();

    if (diff >= 0)
    {
        output.append("Good harvest this year! Total wine: ")
              .append(FormatDoubleNum(floor(producedWine), 0))
              .append(" liters.")
              .append(NEW_LINE)
              .append(FormatDoubleNum(ceil(diff), 0))
              .append(" liters left -> ")
              .append(FormatDoubleNum(ceil(diff / worksCount), 0))
              .append(" liters per person.");
    }
    else
    {
        output.append("It will be a tough winter! More ")
              .append(FormatDoubleNum(floor((-1) * diff), 0))
              .append(" liters wine needed.");
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

//От лозе с площ X квадратни метри се заделя 40% от реколтата за производство на вино. От 1 кв.м лозе се изкарват Y килограма грозде. За 1 литър вино са нужни 2,5 кг. грозде. Желаното количество вино за продан е Z литра.
//Напишете програма, която пресмята колко вино може да се произведе и дали това количество е достатъчно. Ако е достатъчно, остатъкът се разделя по равно между работниците на лозето.
//Вход
//Входът се чете от конзолата и се състои от точно 4 реда:
//•	1ви ред: X кв.м е лозето – цяло число в интервала [10 … 5000]
//•	2ри ред: Y грозде за един кв.м – реално число в интервала [0.00 … 10.00]
//•	3ти ред: Z нужни литри вино – цяло число в интервала [10 … 600]
//•	4ти ред: брой работници – цяло число в интервала [1 … 20]
//Изход
//На конзолата трябва да се отпечата следното:
//•	Ако произведеното вино е по-малко от нужното:
//o   “It will be a tough winter! More { недостигащо вино}
//liters wine needed.”
//	Резултатът трябва да е закръглен към по-ниско цяло число
//•	Ако произведеното вино е колкото или повече от нужното:
//o	“Good harvest this year! Total wine: { общо вино}
//liters.”
//	Резултатът трябва да е закръглен към по-ниско цяло число
//o	“{Оставащо вино} liters left -> {вино за 1 работник} liters per person.”
//	И двата резултата трябва да са закръглени към по-високото цяло число
