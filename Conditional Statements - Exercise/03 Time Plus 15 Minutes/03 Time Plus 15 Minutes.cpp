// 03 Time Plus 15 Minutes.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
using namespace std;

int main()
{
    const int IntervalMinute = 15;

    int hour, minute;
    cin >> hour >> minute;

    int tottalTime = hour * 60 + minute + IntervalMinute;

    int hours = tottalTime / 60;
    int minutes = tottalTime % 60;

    if (hours > 23)
    {
        hours -= 24;
    }

    string output = to_string(hours) + ":" + to_string(minutes);

    if (minutes < 10)
    {
        output = to_string(hours) + ":0" + to_string(minutes);
    }

    cout << output << endl;
}

//Да се напише програма, която чете час и минути от 24 - часово денонощие, въведени от потребителя и изчислява колко ще е часът след 15 минути.Резултатът да се отпечата във формат часове : минути.Часовете винаги са между 0 и 23, а минутите винаги са между 0 и 59. Часовете се изписват с една или две цифри.Минутите се изписват винаги с по две цифри, с водеща нула, когато е необходимо.