// 02 Multiplication Table.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    for (int first = 0; first < 10; first++)
    {
        for (int second = 0; second < 10; second++)
        {
            cout << first + 1 << " * " << second + 1 << " = " << (first + 1) * (second + 1) << endl;
        }
    }
}

//Отпечатайте на конзолата таблицата за умножение за числата от 1 до 10 във формат: 
//"{първи множител} * {втори множител} = {резултат}".