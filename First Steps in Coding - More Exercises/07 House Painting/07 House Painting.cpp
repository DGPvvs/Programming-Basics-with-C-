// 07 House Painting.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <sstream>

using namespace std;

class myString :public string
{
private:
    const string EMPTY = "";
    const string NEW_LINE = "\r\n";

public:

    myString(const char* s) :string(s)
    {

    }

    myString() :string()
    {

    }

    string Empty()
    {
        return this->EMPTY;
    }
    string NewLine()
    {
        return this->NEW_LINE;
    }

    bool Contains(string f)
    {
        int idx = this->find(f);
        return idx > -1;
    }

    string ToLower()
    {
        string s = string("");

        string::iterator it;
        for (it = this->begin(); it != this->end(); it++)
        {
            s.append(1, tolower(*it));
        }

        return s;
    }

    string ToUpper()
    {
        string s = string("");

        string::iterator it;
        for (it = this->begin(); it != this->end(); it++)
        {
            s.append(1, toupper(*it));
        }

        return s;
    }

    ~myString()
    {

    }
};


string FormatDoubleNum(double, int);

int main()
{
    const double RED_PAINT_NORM = 4.3;
    const double GREEN_PAINT_NORM = 3.4;

    const double DOOR_AREA = 1.2 * 2.0;
    const double WINDOWS_AREA = 2 * 1.5 * 1.5;

    string input;
    getline(cin, input);
    double x = stod(input);

    getline(cin, input);
    double y = stod(input);

    getline(cin, input);
    double h = stod(input);

    double floorArea = x * (2 * y + h);
    double wallsArea = 2 * x * (x + y) - DOOR_AREA - WINDOWS_AREA;

    myString output = myString();

    output.append(FormatDoubleNum(wallsArea / GREEN_PAINT_NORM, 2))
          .append(myString().NewLine())
          .append(FormatDoubleNum(floorArea / RED_PAINT_NORM, 2))
          .append(myString().NewLine());

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

//Напишете програма, която да пресмята колко литра боя е нужна за боядисването на къщa. Като за стените се използва зелена боя, а за покрива – червена. Разхода на зелената боя е 1 литър за 3.4 м2, а на червената – 1 литър за 4.3 м2.
//Стените имат следните размери:
//•	Предната и задната стена са квадрати със страна „x“
//o	на предната стена има правоъгълна врата с широчина 1.2м и височина 2м
//•	Страничните стени са правоъгълници със страни „x“ и „y“
//o	и на двете странични стени има по един квадратен прозорец със страна 1.5м
//Покривът има следните размери:
//•	/*Два правоъгълника със страни „x“ и „y“*/
//•	/*Два равностранни триъгълника със страна „x“ и височина „h“*/
//Трябва да пресметнете площта на всички страни и площта на покрива, за да
//намерите колко литра от всяка боя ще са нужни.
//Вход
//От конзолата се четат 3 реда:
//1.x – височината на къщата – реално число в интервала [2...100]
//2.y – дължината на страничната стена – реално число в интервала [2...100]
//3.h – височината на триъгълната стена на прокрива – реално число в интервала [2...100]
//Изход
//Да се отпечатат на конзолата две числа всяко на нов ред:
//•	Литрите зелена боя
//•	Литритe червена боя
//Форматирани до вторият знак след десетичната запетая.