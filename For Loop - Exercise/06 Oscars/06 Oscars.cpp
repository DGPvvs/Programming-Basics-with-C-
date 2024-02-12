// 06 Oscars.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include<sstream>
#include <string>
#include <iostream>

using namespace std;

#define EMPTY ""

string formatDoubleNum(double number, int precision)
{
    stringstream stream;

    stream.precision(precision);
    stream << fixed;

    stream << number;

    return stream.str();
}

int main()
{
    const double StarsPoint = 1250.5;
        
    string name, input;
    getline(cin, name);

    getline(cin, input);
    double points = stod(input);

    getline(cin, input);
    int numOfRaters = stoi(input);

    for (int i = 0; i < numOfRaters; i++)
    {
        if (points > StarsPoint)
        {
            i = numOfRaters;
        }
        else
        {
            string judgeName;
            getline(cin, judgeName);

            getline(cin, input);
            double judgePoints = stod(input);

            points += judgeName.length() * judgePoints / 2.0;
        }
    }

    string output = EMPTY;

    if (points > StarsPoint)
    {
        output.append("Congratulations, ")
              .append(name)
              .append(" got a nominee for leading role with ")
              .append(formatDoubleNum(points, 1))
              .append("!");
    }
    else
    {
        output.append("Sorry, ")
              .append(name)
              .append(" you need ")
              .append(formatDoubleNum((StarsPoint - points), 1))
              .append(" more!");
    }

    cout << output << endl;
}

//Поканени сте от академията да напишете софтуер, който да пресмята точките за актьор/актриса. Академията ще ви даде първоначални точки за актьора. След това всеки оценяващ ще дава своята оценка. Точките, които актьора получава се формират от: дължината на името на оценяващия умножено по точките, които дава делено на две. 
//Ако резултатът в някой момент надхвърли 1250.5 програмата трябва да прекъсне и да се отпечата, че дадения актьор е получил номинация.
//Вход
//•	Име на актьора - текст
//•	Точки от академията - реално число в интервала [2.0... 450.5]
//•	Брой оценяващи n - цяло число в интервала[1… 20]
//На следващите n-на брой реда:
//o Име на оценяващия - текст
//o	Точки от оценяващия - реално число в интервала [1.0... 50.0]
//Изход
//Да се отпечата на конзолата един ред:
//•	Ако точките са над 1250.5:
//"Congratulations, {име на актьора} got a nominee for leading role with {точки}!"
//•	Ако точките не са достатъчни:
//	"Sorry, {име на актьора} you need {нужни точки} more!"
//Резултатът да се форматирана до първата цифра след десетичния знак!