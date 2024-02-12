// 04 Walking.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

#define EMPTY ""
#define NEW_LINE "\r\n"

int main()
{
    const int GoalWalk = 10000;
    const string GoingHome = "Going home";

    int tottalWalk = 0;

    bool isLoopExit = false;

    while (!isLoopExit)
    {
        string input;
        getline(cin, input);

        if (input == GoingHome)
        {
            getline(cin, input);
            isLoopExit = true;
        }

        tottalWalk += stoi(input);

        if (tottalWalk - GoalWalk >= 0)
        {
            isLoopExit = true;
        }
    }

    string output = EMPTY;

    int diff = tottalWalk - GoalWalk;

    if (diff >= 0)
    {
        output.append("Goal reached! Good job!");
    }
    else
    {
        output.append(to_string(-1 * diff))
              .append(" more steps to reach goal.");
    }

    cout << output << endl;
}
//Габи иска да започне здравословен начин на живот и си е поставила за цел да върви 10 000 стъпки всеки ден.Някои дни обаче е много уморена от работа и ще иска да се прибере преди да постигне целта си.Напишете програма, която чете от конзолата по колко стъпки изминава тя всеки път като излиза през деня и когато постигне целта си да се изписва "Goal reached! Good job!"  и колко стъпки повече е извървяла "{разликата между стъпките} steps over the goal!".
//Ако иска да се прибере преди това, тя ще въведе командата "Going home" и ще въведе стъпките, които е извървяла докато се прибира.След което, ако не е успяла да постигне целта си, на конзолата трябва да се изпише : "{разликата между стъпките} more steps to reach goal."