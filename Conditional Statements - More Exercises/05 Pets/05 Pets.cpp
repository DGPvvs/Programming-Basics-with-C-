// 05 Pets.cpp : This file contains the 'main' function. Program execution begins and ends there.
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
    string input;
    getline(cin, input);
    int day = stoi(input);

    getline(cin, input);
    int food = stoi(input);

    getline(cin, input);
    double dogFoodPerDay = stod(input);

    getline(cin, input);
    double catFoodPerDay = stod(input);

    getline(cin, input);
    double tourtugFoodPerDay = stod(input);

    double tottalEatigFood = (dogFoodPerDay + catFoodPerDay + tourtugFoodPerDay / 1000.0) * day;
    double diff = food - tottalEatigFood;

    string output = string();

    if (diff >= 0)
    {
        output.append(FormatDoubleNum(floor(diff), 0))
              .append(" kilos of food left.");
    }
    else
    {
        output.append(FormatDoubleNum(ceil((-1) * diff), 0))
              .append(" more kilos of food are needed.");
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

//Марина обича да пътува. Тя има 3 домашни любимеца (куче, котка и костенурка). Когато заминава на пътешествие трябва да съобрази колко храна да им остави, за да не останат гладни. Напишете програма, която пресмята колко килограма храна ще изядат всички за времето, в което Марина отсъства и дали оставената храна от нея ще им е достатъчна. Всяко животно изяжда определено количество храна на ден.
//Вход
//От конзолата се четат пет реда:
//•	Първи ред – брой дни – цяло число в интервал [1…5000]
//•	Втори ред – оставена храна в килограми – цяло число в интервал [0…100000]
//•	Трети ред – храна на ден за кучето в килограми – реално число в интервал [0.00…100.00]
//•	Четвърти ред – храна на ден за котката в килограми– реално число в интервал [0.00…100.00]
//•	Пети ред – храна на ден за костенурката в грамове – реално число в интервал [0.00…10000.00]
//Изход
//На конзолата трябва да се отпечата на един ред:
//•	Ако оставената храна Е достатъчна:
//o "{килограма остатък} kilos of food left."
//	Резултатът трябва да е закръглен към по-ниското цяло число
//•	Ако оставената храна НЕ Е достатъчна:
//o	“{ килограма недостигат}
//more kilos of food are needed.”
//	Резултатът трябва да е закръглен към по-високото цяло число