// 06 Bills.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

#define NEW_LINE "\r\n"

string FormatDoubleNum(double, int);

int main()
{
    string input;
    getline(cin, input);
    int months = stoi(input);

    double sumElectrisity = 0;
    double sumOther = 0;

    for (int i = 1; i <= months; i++)
    {
        string input;
        getline(cin, input);
        double electricityBill = stod(input);

        sumElectrisity += electricityBill;
        sumOther += (electricityBill + 35) * 1.2;

    }

    double sumWater = months * 20.0;
    double sumIntrnet = months * 15.0;

    string lvNewLine = string().append(" lv").append(NEW_LINE);

    string output = string().append("Electricity: ")
                            .append(FormatDoubleNum(sumElectrisity, 2))
                            .append(lvNewLine)
                            .append("Water: ")
                            .append(FormatDoubleNum(sumWater, 2))
                            .append(lvNewLine)
                            .append("Internet: ")
                            .append(FormatDoubleNum(sumIntrnet, 2))
                            .append(lvNewLine)
                            .append("Other: ")
                            .append(FormatDoubleNum(sumOther, 2))
                            .append(lvNewLine)
                            .append("Average: ")
                            .append(FormatDoubleNum(((sumElectrisity + sumWater + sumIntrnet + sumOther) / months), 2))
                            .append(lvNewLine);

    cout << output;
}

string FormatDoubleNum(double number, int precision)
{
    stringstream stream;

    stream.precision(precision);
    stream << fixed;

    stream << number;

    return stream.str();
}

//Напишете програма която да пресмята средният разход за месец на семейство за даден период време. За всеки месец разходите са следните:
//•	За ток – всеки месец е различен, ще се чете от конзолата
//•	за вода – 20 лв.
//•	за интернет – 15 лв.
//•	за други – събират се тока, водата и интернета за месеца и към сумата се прибавят 20%.
//За всеки разход трябва да се пресметне колко общо е платено за всички месеци.
//Вход
//Входът се чете от конзолата:
//•	Първи ред – месеците за които се търси средният разход – цяло число в интервала [1...100]
//•	За всеки месец – сметката за ток – реално число в интервала [1.00...1000.00]
//Изход
//Да се отпечата на конзолата 5 реда:
//•	1ви ред: "Electricity: {ток за всички месеци} lv"
//•	2ри ред: "Water: {вода за всички месеци} lv"
//•	3ти ред: "Internet: {интернет за всички месеци} lv"
//•	4ти ред: "Other: {други за всички месеци} lv"
//•	5ти ред: "Average: {средно всички разходи за месец} lv"
//Всички числа трябва да са форматирана до вторият знак след запетаята.
