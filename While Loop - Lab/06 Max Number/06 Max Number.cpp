// 06 Max Number.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    const string Stop = "Stop";

    bool isNotFirst = false;
    bool isLoopExit = false;

    int maximum = 0;

    while (!isLoopExit)
    {
        string input;
        getline(cin, input);

        if (input == Stop)
        {
            isLoopExit = true;
        }
        else
        {
            int current = stoi(input);

            if (isNotFirst)
            {
                maximum = max(maximum, current);
            }
            else
            {
                maximum = current;
                isNotFirst = true;
            }
        }
    }

    cout << maximum << endl;
}
//Напишете програма, която до получаване на командата "Stop", чете цели числа, въведени от потребителя и намира най-голямото измежду тях. Въвежда се по едно число на ред.