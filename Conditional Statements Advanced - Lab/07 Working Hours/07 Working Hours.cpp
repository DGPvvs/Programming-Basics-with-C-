// 07 Working Hours.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

bool contains(string s, string f)
{
    int idx = s.find(f);
    return idx > -1;
}

int main()
{
    const string Closed = "closed";
    const string Open = "open";

    const string WorkDays = "MondayTuesdayWednesdayThursdayFridaySaturday";

    const int WorkingHoursStart = 10;
    const int WorkingHoursEnd = 18;

    int hour;
    string day;

    cin >> hour >> day;

    string output = Closed;

    bool isWorkTime = (contains(WorkDays, day) && hour >= WorkingHoursStart && hour < WorkingHoursEnd);

    if (isWorkTime)
    {
        output = Open;
    }

    cout << output << endl;
}

//Да се напише програма, която чете час от денонощието(цяло число) и ден от седмицата(текст) - въведени от потребителя и проверява дали офисът на фирма е отворен, като работното време на офисът е от 10 - 18 часа, от понеделник до събота включително