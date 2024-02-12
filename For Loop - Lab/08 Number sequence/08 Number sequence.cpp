// 08 Number sequence.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <climits>
#include <string>

#define EMPTY ""
#define NEW_LINE "\r\n"

using namespace std;

int main()
{
    int countOfNumber;
    cin >> countOfNumber;

    int max = INT_MIN;
    int min = INT_MAX;

    for (int i = 0; i < countOfNumber; i++)
    {
        int current;
        cin >> current;

        if (current < min)
        {
            min = current;
        }

        if (current > max)
        {
            max = current;
        }
    }

    string output = EMPTY;

    output.append("Max number: ")
          .append(to_string(max))
          .append(NEW_LINE)
          .append("Min number: ")
          .append(to_string(min));

    cout << output << endl;
}
//Напишете програма, която чете n на брой цели числа. Принтирайте най-голямото и най-малкото число сред въведените.