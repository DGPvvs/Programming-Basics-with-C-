// 07 School Camp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

string FormatDoubleNum(double, int);

int main()
{
    const string WINTER = "Winter";
    const string SPRING = "Spring";
    const string SUMMER = "Summer";
    const string BOYS = "boys";
    const string GIRLS = "girls";

    string season;
    getline(cin, season);

    string grupType;
    getline(cin, grupType);

    string input;
    getline(cin, input);
    int numberOfStudents = stoi(input);

    getline(cin, input);
    int numberOfNights = stoi(input);

    double price = .0;
    string sport;

    if (season == WINTER)
    {
        if (grupType == BOYS)
        {
            price = 9.6 * numberOfNights * numberOfStudents;
            sport = "Judo";
        }
        else if (grupType == GIRLS)
        {
            price = 9.6 * numberOfNights * numberOfStudents;
            sport = "Gymnastics";
        }
        else
        {
            price = 10.0 * numberOfNights * numberOfStudents;
            sport = "Ski";
        }
    }
    else if (season == SPRING)
    {
        if (grupType == BOYS)
        {
            price = 7.2 * numberOfNights * numberOfStudents;
            sport = "Tennis";
        }
        else if (grupType == GIRLS)
        {
            price = 7.2 * numberOfNights * numberOfStudents;
            sport = "Athletics";
        }
        else
        {
            price = 9.5 * numberOfNights * numberOfStudents;
            sport = "Cycling";
        }
    }
    else
    {
        if (grupType == BOYS)
        {
            price = 15.0 * numberOfNights * numberOfStudents;
            sport = "Football";
        }
        else if (grupType == GIRLS)
        {
            price = 15.0 * numberOfNights * numberOfStudents;
            sport = "Volleyball";
        }
        else
        {
            price = 20.0 * numberOfNights * numberOfStudents;
            sport = "Swimming";
        }
    }

    if (numberOfStudents >= 50)
    {
        price *= .5;
    }
    else if (numberOfStudents >= 20)
    {
        price *= (1 - .15);
    }
    else if (numberOfStudents >= 10)
    {
        price *= (1 - .05);
    }

    string output = string().append(sport)
                            .append(" ")
                            .append(FormatDoubleNum(price, 2))
                            .append(" lv.");

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

//Частно училище организира лагери за учениците по време на ваканциите. В зависимост от вида на ваканцията (пролетна, лятна или зимна) и вида на групата (момчета/момичета или смесена) цената на нощувката в хотела е различна, както и спортът, който ще практикуват учениците.
//	                Зимна ваканция	Пролетна ваканция	Лятна ваканция
//момчета/момичета	9.60	        7.20	            15
//смесена група	    10	            9.50	            20
//Училището получава отстъпка от крайната цена, в зависимост от броя на настанените в хотела ученици:
//•	Ако броят на учениците е 50 или повече, училището получава 50% отстъпка
//•	Ако броят на учениците е 20 или повече и в същото време по-малък от 50, училището получава 15% отстъпка
//•	Ако броят на учениците е 10 или повече и в същото време по-малък от 20, училището получава 5% отстъпка
//В таблицата по-долу са дадени спортовете, които ще се практикуват в зависимост от вида на ваканцията и групата:
//	                Зимна ваканция	Пролетна ваканция	Лятна ваканция
//момичета	        Gymnastics	    Athletics	        Volleyball
//момчета	            Judo	        Tennis	            Football
//смесена група	    Ski	            Cycling	            Swimming
//Да се напише програма, която пресмята цената, която ще заплати училището за нощувките и принтира спорта, който ще се практикува от учениците.
//Вход
//От конзолата се четат 4 реда:
//1.Сезонът – текст - “Winter”, “Spring” или “Summer”;
//2.Видът на групата – текст - “boys”, “girls” или “mixed”;
//3.Брой на учениците – цяло число в интервала [1 … 10000] ;
//4.Брой на нощувките – цяло число в интервала [1 … 100].
//Изход
//На конзолата се отпечатва 1 ред:
//•	Спортът, който са практикували учениците и цената за нощувките, която е заплатило училището, форматирана до втория знак след десетичната запетая, в следния формат:
//"{спортът} {цената} lv.“
