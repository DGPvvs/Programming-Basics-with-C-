// 07 Trekking Mania.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include<sstream> 
#include<cmath> 

using namespace std;

#define EMPTY ""
#define NEW_LINE "\r\n"

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
    const int MUSALA_INDEX = 0;
    const int MONBLAN_INDEX = 1;
    const int KILIMANDJARO_INDEX = 2;
    const int K2_INDEX = 3;
    const int EVEREST_INDEX = 4;

    const int MUSALA_COUNTS = 5;
    const int MONBLAN_COUNTS = 12;
    const int KILIMANDJARO_COUNTS = 25;
    const int K2_COUNTS = 40;

    int grups[] = {0, 0, 0, 0, 0};

    string input;
    getline(cin, input);
    int numOfGroups = stoi(input);

    int tottalPeople = 0;

    for (int i = 0; i < numOfGroups; i++)
    {
        getline(cin, input);
        int peopleCount = stoi(input);

        tottalPeople += peopleCount;

        int index = peopleCount <= MUSALA_COUNTS ? MUSALA_INDEX : peopleCount <= MONBLAN_COUNTS ? MONBLAN_INDEX : peopleCount <= KILIMANDJARO_COUNTS ? KILIMANDJARO_INDEX : peopleCount <= K2_COUNTS ? K2_INDEX : EVEREST_INDEX;

        grups[index] += peopleCount;
    }

    string output = EMPTY;

    for (int i = 0; i < 5; i++)
    {
        output.append(formatDoubleNum(grups[i] * 100.0 / tottalPeople, 2))
              .append("%")
              .append(NEW_LINE);
    }

    cout << output;
}

//Катерачи от цяла България се събират на групи и набелязват следващите върхове за изкачване. Според размера на групата, катерачите ще изкачват различни върхове.
//•	Група до 5 човека – изкачват Мусала
//•	Група от 6 до 12 човека – изкачват Монблан
//•	Група от 13 до 25 човека – изкачват Килиманджаро
//•	Група от 26 до 40 човека –  изкачват К2
//•	Група от 41 или повече човека – изкачват Еверест
//Да се напише програма, която изчислява процента на катерачите изкачващи всеки връх.
//Вход
//От конзолата се четат поредица от числа, всяко на отделен ред:
//•	На първия ред – броя на групите от катерачи – цяло число в интервала [1...1000]
//•	За всяка една група на отделен ред – броя на хората в групата – цяло число в интервала [1...1000]
//Изход
//Да се отпечатат на конзолата 5 реда, всеки от които съдържа процент между 0.00% и 100.00% с точност до втората цифра след десетичната запетая.
//•	Първи ред - процентът изкачващи Мусала
//•	Втори ред – процентът изкачващи Монблан
//•	Трети ред – процентът изкачващи Килиманджаро
//•	Четвърти ред – процентът изкачващи К2
//•	Пети ред – процентът изкачващи Еверест