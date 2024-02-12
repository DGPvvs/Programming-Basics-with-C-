// 03 Combinations.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string input;
    getline(cin, input);

    int n = stoi(input);

    int count = 0;

    for (int x1 = 0; x1 < n + 1; x1++)
    {
        for (int x2 = 0; x2 < n + 1; x2++)
        {
            for (int x3 = 0; x3 < n + 1; x3++)
            {
                bool isMatches = x1 + x2 + x3 == n;
                if (isMatches)
                {
                    count++;
                }
            }
        }
    }

    cout << count << endl;
}

//Напишете програма, която изчислява колко решения в естествените числа (включително и нулата) има уравнението:
//x1 + x2 + x3 = n
//Числото n е цяло число и се въвежда от конзолата.