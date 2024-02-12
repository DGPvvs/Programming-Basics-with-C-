// 01 Number Pyramid.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string input;
    getline(cin, input);
    int n = stoi(input);

    int current = 1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            if (current > n)
            {
                j = i + 1;
            }
            else
            {
                cout << current << " ";
                current++;
            }
        }

        if (current > n)
        {
            i = n;
        }
        else
        {
            cout << endl;
        }
    }
    
}

//Напишете програма, която чете цяло число n, въведено от потребителя, и отпечатва пирамида от числа като в примерите: