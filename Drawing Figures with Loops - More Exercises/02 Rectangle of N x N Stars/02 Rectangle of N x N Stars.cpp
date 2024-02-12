// 02 Rectangle of N x N Stars.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

#define EMPTY ""
#define NEW_LINE "\r\n"

int main()
{
    string input;
    getline(cin, input);
    int n = stoi(input);

    string output = EMPTY;

    for (int i = 0; i < n; i++)
    {
        output.append(string(n, '*'))
              .append(NEW_LINE);
    }

    cout << output << endl;
}

//Напишете програма, която чете цяло положително число n, въведено от потребителя, и печата на конзолата правоъгълник от n * n звездички.