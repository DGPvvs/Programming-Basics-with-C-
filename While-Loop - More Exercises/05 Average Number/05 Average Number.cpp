// 05 Average Number.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

string FormatDoubleNum(double, int);

int main()
{
    string input;
    getline(cin, input);
    int n = stoi(input);
   
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        getline(cin, input);
        sum += stoi(input);
    }

    string output = string().append(FormatDoubleNum((sum / (1.0 * n)), 2));

    cout << output << endl;
}

string FormatDoubleNum(double number, int precision)
{
    stringstream stream;

    stream.precision(precision);
    stream << fixed;

    stream << number;

    return stream.str();
}


//Ќапишете програма, ко€то прочита едно число n, след това прочита n на брой цели числа и принтира средно аритметичното на т€хната сума число, форматирано до втората цифра след десетични знак.