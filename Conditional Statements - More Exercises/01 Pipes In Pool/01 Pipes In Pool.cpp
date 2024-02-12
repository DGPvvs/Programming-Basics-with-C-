// 01 Pipes In Pool.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <sstream>

using namespace std;

#define NEW_LINE "\r\n"

string FormatDoubleNum(double, int);

int main()
{
    string input;
    getline(cin, input);
    int v = stoi(input);

    getline(cin, input);
    int p1 = stoi(input);

    getline(cin, input);
    int p2 = stoi(input);

    getline(cin, input);
    double h = stod(input);

    double v1 = p1 * h;
    double v2 = p2 * h;
    double vPipes = v1 + v2;

    double diff = v - vPipes;

    string output = string();

    if (diff >= 0)
    {
        output.append("The pool is ")
              .append(FormatDoubleNum((vPipes * 100 / v), 2))
              .append("% full. Pipe 1: ")
              .append(FormatDoubleNum((v1 * 100 / vPipes), 2))
              .append("%. Pipe 2: ")
              .append(FormatDoubleNum((v2 * 100 / vPipes), 2))
              .append("%.")
              .append(NEW_LINE);
    }
    else
    {
        output.append("For ")
              .append(FormatDoubleNum(h, 2))
              .append(" hours the pool overflows with ")
              .append(FormatDoubleNum(((-1.0) * diff), 2))
              .append(" liters.")
              .append(NEW_LINE);
    }

    cout << output ;
}

string FormatDoubleNum(double number, int precision)
{
    stringstream stream;

    stream.precision(precision);
    stream << fixed;

    stream << number;

    return stream.str();
}

//Басейн с обем V има две тръби от които се пълни. Всяка тръба има определен дебит (литрите вода минаващи през една тръба за един час). Работникът пуска тръбите едновременно и излиза за N часа. Напишете програма, която изкарва състоянието на басейна, в момента, когато работникът се върне. 
//Вход
//От конзолата се четат четири реда:
//•	Първият ред съдържа числото V – Обем на басейна в литри – цяло число в интервала [1…10000].
//•	Вторият ред съдържа числото P1 – дебит на първата тръба за час – цяло число в интервала [1…5000].
//•	Третият ред съдържа числото P2 – дебит на втората тръба за час– цяло число в интервала [1…5000].
//•	Четвъртият ред съдържа числото H – часовете които работникът отсъства – реално число в интервала [1.0…24.00]
//Изход
//Да се отпечата на конзолата едно от двете възможни състояния:
//•	До колко се е запълнил басейна и коя тръба с колко процента е допринесла.
//o	"The pool is {запълненост на басейна в проценти}% full. Pipe 1: {процент вода от първата тръба}%. Pipe 2: {процент вода от втората тръба}%."
//Aко басейнът се е препълнил – с колко литра е прелял за даденото време.
//o	"For {часовете, които тръбите са пълнили вода} hours the pool overflows with {литрите вода в повече} liters."