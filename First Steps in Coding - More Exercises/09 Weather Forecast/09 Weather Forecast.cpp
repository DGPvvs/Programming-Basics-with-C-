// 09 Weather Forecast.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
    const string Sunny = "sunny";

    string input;
    getline(cin, input);

    if (input == Sunny)
    {
        cout << "It's warm outside!" << endl;
    }
    else
    {
        cout << "It's cold outside!" << endl;
    }
}

//Напишете програма, която познава дали е топло или студено навън. От конзолата се чете един ред – текст, който подсказва какво е времето. При въвеждане на "sunny" трябва да се отпечата "It's warm outside!". Във всички останали случаи трябва да се отпечата "It's cold outside!". 