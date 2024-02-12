// 06 Speed Info.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

constexpr auto EMPTY_STRING = "";

int main()
{
    const int SpeedSlow = 10;
    const int SpeedAverage = 50;
    const int SpeedFast = 150;
    const int SpeedUltraFast = 1000;

    const string Slow = "slow";
    const string Average = "average";
    const string Fast = "fast";
    const string UltraFast = "ultra fast";
    const string ExtremelyFast = "extremely fast";

    double speed;
    cin >> speed;

    string output = EMPTY_STRING;

    if (speed <= SpeedSlow)
    {
        output = Slow;
    }
    else if (speed <= SpeedAverage)
    {
        output = Average;
    }
    else if (speed <= SpeedFast)
    {
        output = Fast;
    }
    else if (speed <= SpeedUltraFast)
    {
        output = UltraFast;
    }
    else
    {
        output = ExtremelyFast;
    }

    cout << output << endl;
}

//Да се напише програма, която чете скорост(реално число), въведена от потребителя и отпечатва информация за скоростта.
//•	При скорост до 10 (включително)отпечатайте "slow"
//•	При скорост над 10 и до 50 (включително)отпечатайте "average"
//•	При скорост над 50 и до 150 (включително)отпечатайте "fast"
//•	При скорост над 150 и до 1000 (включително)отпечатайте "ultra fast"
//•	При по - висока скорост отпечатайте "extremely fast"