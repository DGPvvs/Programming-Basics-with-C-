// 01 Read Text.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

#define EMPTY ""
#define NEW_LINE "\r\n"


int main()
{
    const string Stop = "Stop";

    string output = EMPTY;

    bool isLoopExit = false;

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
            output.append(input)
                   .append(NEW_LINE);
        }
    }

    cout << output;
}

//Ќапишете програма, ко€то чете текст от конзолата (стринг) и го принтира, докато не получи командата "Stop".