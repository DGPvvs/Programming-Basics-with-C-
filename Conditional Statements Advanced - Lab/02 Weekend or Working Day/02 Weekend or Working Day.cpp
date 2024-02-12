// 02 Weekend or Working Day.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    const string WorkDays = "MondayTuesdayWednesdayThursdayFriday";
    const string WeekendDays = "SaturdaySunday";

    const string ErrorOutput = "Error";
    const string WorkingDay = "Working day";
    const string Weekend = "Weekend";

    string input;
    cin >> input;

    string output = ErrorOutput;
    int idxWorkDay = WorkDays.find(input);
    int idxWeekendDay = WeekendDays.find(input);
    bool isWorkDay = (idxWorkDay > -1);
    bool isWeekendDay = (idxWeekendDay > -1);

    if (isWorkDay)
    {
        output = WorkingDay;
    }
    else if (isWeekendDay)
    {
        output = Weekend;
    }

    cout << output << endl;

    return 0;
}

//Напишете програма която, чете ден от седмицата (текст), на английски език - въведен от потребителя.Ако денят е работен отпечатва на конзолата - "Working day", ако е почивен - "Weekend". Ако се въведе текст различен от ден от седмицата да се отпечата - "Error".
