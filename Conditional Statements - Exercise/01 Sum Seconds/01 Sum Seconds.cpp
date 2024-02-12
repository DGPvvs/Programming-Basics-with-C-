// 01 Sum Seconds.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
using namespace std;

int main()
{
    int timeOne, timeTwo, timeThree;
    cin >> timeOne >> timeTwo >> timeThree;

    int tottalTime = timeOne + timeTwo + timeThree;
    int minutes = tottalTime / 60;
    int seconds = tottalTime % 60;

    string output = to_string(minutes) + ":" + to_string(seconds);

    if (seconds < 10)
    {
        output = to_string(minutes) + ":0" + to_string(seconds);
    }

    cout << output << endl;
}

//Трима спортни състезатели финишират за някакъв брой секунди(между 1 и 50).Да се напише програма, която чете времената на състезателите в секунди, въведени от потребителя и пресмята сумарното им време във формат "минути:секунди".Секундите да се изведат с водеща нула(2 -> "02", 7 -> "07", 35 -> "35").
