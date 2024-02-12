// 03 Square of Stars.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

#define EMPTY ""
#define SPACE " "
#define NEW_LINE "\r\n"

int main()
{
    string input;
    getline(cin, input);
    int n = stoi(input);

    string output = EMPTY;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            output.append("*");

            if (j < n - 1)
            {
                output.append(SPACE);
            }
        }

        output.append(NEW_LINE);
    }

    cout << output << endl;
}

//Напишете програма, която чете число n, въведено от потребителя, и чертае квадрат от n * n звездички. Разликата с предходната задача е, че между всеки две звездички има по един интервал.