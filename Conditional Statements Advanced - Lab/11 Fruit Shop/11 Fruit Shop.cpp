// 11 Fruit Shop.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

enum class Enum1
{
    Zero,
    One,
    Two,
    Three
};

bool contains(string s, string f)
{
    int idx = s.find(f);
    return idx > -1;
}

int main()
{
    const string WorkDays = "MondayTuesdayWednesdayThursdayFriday";
    const string WeekendDays = "SaturdaySunday";

    string fruit, day;
    double count;
    cin >> fruit >> day >> count;

    bool isWorkDay = true;
    bool isCorrect = true;
    double priceWorkDay, priceWeekEnd;

    if (contains(WorkDays, day))
    {
        isWorkDay = true;
    }
    else if (contains(WeekendDays, day))
    {
        isWorkDay = false;
    }
    else
    {
        isCorrect = false;
    }

    if (fruit == "banana")
    {
        priceWorkDay = count * 2.5;
        priceWeekEnd = count * 2.7;
    }
    else if (fruit == "apple")
    {
        priceWorkDay = count * 1.2;
        priceWeekEnd = count * 1.25;
    }
    else if (fruit == "orange")
    {
        priceWorkDay = count * .85;
        priceWeekEnd = count * .9;
    }
    else if (fruit == "grapefruit")
    {
        priceWorkDay = count * 1.45;
        priceWeekEnd = count * 1.6;
    }
    else if (fruit == "kiwi")
    {
        priceWorkDay = count * 2.7;
        priceWeekEnd = count * 3.0;
    }
    else if (fruit == "pineapple")
    {
        priceWorkDay = count * 5.5;
        priceWeekEnd = count * 5.6;
    }
    else if (fruit == "grapes")
    {
        priceWorkDay = count * 3.85;
        priceWeekEnd = count * 4.2;
    }
    else
    {
        isCorrect = false;
    }

    string result = "error";

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);

    cout.precision(2);

    if (isCorrect)
    {
        if (isWorkDay)
        {
            cout << priceWorkDay;
        }
        else
        {
            cout << priceWeekEnd;
        }
    }
    else
    {
        cout << result;
    }

    cout << endl;
}

//Магазин за плодове през работните дни работи на следните цени :
//плод	banana	apple	orange	grapefruit	kiwi	pineapple	grapes
//цена	2.50	1.20	0.85	1.45	    2.70	5.50	    3.85
//Събота и неделя магазинът работи на по - високи цени :
//плод	banana	apple	orange	grapefruit	kiwi	pineapple	grapes
//цена	2.70	1.25	0.90	1.60	    3.00	5.60	    4.20
//Напишете програма, която чете от конзолата плод(banana / apple / orange / grapefruit / kiwi / pineapple / grapes), ден от седмицата(Monday / Tuesday / Wednesday / Thursday / Friday / Saturday / Sunday) и количество(реално число), въведени от потребителя, и пресмята цената според цените от таблиците по - горе.Резултатът да се отпечата закръглен с 2 цифри след десетичната точка.При невалиден ден от седмицата или невалидно име на плод да се отпечата "error".