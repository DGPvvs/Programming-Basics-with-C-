// 11 HappyCat Parking.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <sstream>

using namespace std;

#define EMPTY ""
#define NEW_LINE "\r\n"

string formatDoubleNum(double, int);

int main()
{
    const double UssualiTax = 1.0;
    const double AddEvenDayOddHourTax = 2.5 - UssualiTax;
    const double AddOddDayEvenHourTax = 1.25 - UssualiTax;

    string input;
    getline(cin, input);
    int countDay = stoi(input);

    getline(cin, input);
    int countHours = stoi(input);

    double tottalSum = .0;

    string output = EMPTY;

    for (int days = 1; days <= countDay; days++)
    {
        double daySum = .0;

        for (int hours = 1; hours <= countHours; hours++)
        {
            int isEvenDay = 1 - (days % 2);
            int isOddDay = days % 2;
            int isEvenHour = 1 - (hours % 2);
            int isOddHour = hours % 2;

            daySum += UssualiTax + AddEvenDayOddHourTax * isEvenDay * isOddHour + AddOddDayEvenHourTax * isOddDay * isEvenHour;
        }

        output.append("Day: ")
            .append(to_string(days))
            .append(" - ")
            .append(formatDoubleNum(daySum, 2))
            .append(" leva")
            .append(NEW_LINE);

        tottalSum += daySum;
    }

    output.append("Total: ")
        .append(formatDoubleNum(tottalSum, 2))
        .append(" leva");

    cout << output << endl;

    return 0;
}

string formatDoubleNum(double number, int precision)
{
    stringstream stream;

    stream.precision(precision);
    stream << fixed;

    stream << number;

    return stream.str();
}

//Деси трябва да заведе котката си на ветеринар в клиниката "Happy Cat", но паркингът се заплаща. Напишете програма, която пресмята колко общо трябва да се плати за престоя на колата на Деси на паркинга, за да заведе котката си на ветеринар. Паркингът е различен от останалите и има разнообразен ценоразпис. За всеки четен ден и нечетен час, паркингът таксува 2.50 лева. Във всеки нечетен ден и четен час таксата е 1.25 лева, във всички останали случаи се заплаща 1 лев. Таксуването става на всеки изминал час от деня. Всеки един от изходите трябва да бъде закръглен до втория знак след десетичната запетая.
//Вход
//От конзолата се четат два реда:
//•	Брой дни – цяло число в интервала [1 … 5]
//•	Брой часове за всеки един от дните - цяло число в интервала [1 … 24]
//Изход:
//Да се отпечата на конзолата:
//•	За всеки изминал ден, общата сума, която трябва да се плати – "Day: {индексът на деня} – {общата сума за деня} leva"
//•	Когато програмата приключи - "Total: {общата сума за всички дни} leva"