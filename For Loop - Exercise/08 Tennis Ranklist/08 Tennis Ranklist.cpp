// 08 Tennis Ranklist.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <map>
#include <string>
#include <cmath>
#include<sstream> 

#define EMPTY ""
#define NEW_LINE "\r\n"

using namespace std;

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
    const char WIN_SYMBOL = 'W';

    map<char, int> points =
    {
        {'W', 2000},
        { 'F', 1200 },
        { 'S', 720 }
    };

    string input;

    getline(cin, input);
    int tournamentsCount = stoi(input);

    getline(cin, input);
    int startPoints = stoi(input);


    int endPoints = startPoints;
    int winsCount = 0;

    for (int i = 0; i < tournamentsCount; i++)
    {
        getline(cin, input);
        char result = input[0];

        endPoints += points[result];
        winsCount += result == WIN_SYMBOL ? 1 : 0;
    }

    string output = EMPTY;

    output.append("Final points: ")
          .append(to_string(endPoints))
          .append(NEW_LINE)
          .append("Average points: ")
          .append(formatDoubleNum(floor(1.0 * (endPoints - startPoints) / tournamentsCount), 0))
          .append(NEW_LINE)
          .append(formatDoubleNum((100.0 * winsCount / tournamentsCount), 2))
          .append("% ");

    cout << output << endl;
}

//Григор Димитров е тенисист, чиято следваща цел е изкачването в световната ранглиста по тенис за мъже. 
//През годината Гришо участва в определен брой турнири, като за всеки турнир получава точки, които зависят от позицията, на която е завършил в турнира. Има три варианта за завършване на турнир:
//	W - ако е победител получава 2000 точки
//	F - ако е финалист получава 1200 точки
//	SF - ако е полуфиналист получава 720 точки
//Напишете програма, която изчислява колко ще са точките на Григор след изиграване на всички турнири, като знаете с колко точки стартира сезона. Също изчислете колко точки средно печели от всички изиграни турнири и колко процента от турнирите е спечелил. 
//Вход
//От конзолата първо се четат два реда:
//•	Брой турнири, в които е участвал – цяло число в интервала [1…20] 
//•	Начален брой точки в ранглистата - цяло число в интервала [1...4000]
//За всеки турнир се прочита отделен ред:
//•	Достигнат етап от турнира – текст – "W", "F" или "SF"
//Изход
//Отпечатват се три реда в следния формат:
//•	"Final points: {брой точки след изиграните турнири}"
//•	"Average points: {средно колко точки печели за турнир}"
//•	"{процент спечелени турнири}%"
//Средните точки да бъдат закръглени към най-близкото цяло число надолу, а процентът да се форматира до втората цифра след десетичния знак.