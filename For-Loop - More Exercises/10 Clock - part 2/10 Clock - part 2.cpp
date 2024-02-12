// 10 Clock - part 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

#define NEW_LINE "\r\n"

int main()
{
    const int Max_Secunds = 86400;

    int currentSecunds = 0;

    string output = string();

    do
    {
        int hour = (currentSecunds / 60) / 60;
        int minute = (currentSecunds / 60) % 60;
        int secund = currentSecunds % 60;

        output.append(to_string(hour))
              .append(" : ")
              .append(to_string(minute))
              .append(" : ")
              .append(to_string(secund))
              .append(NEW_LINE);

        currentSecunds++;
    } while (currentSecunds < Max_Secunds);

    cout << output;
}

//Напишете програма, която да отпечатва часовете в денонощието от 0:0:0 до 23:59:59, всеки на отделен ред.
//Часовете да се изписват във формат "{час} : {минути} : {секунди} ".
