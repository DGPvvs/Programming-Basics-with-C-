// 13 Prime Pairs.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

#define EMPTY ""
#define NEW_LINE "\r\n"
#define SPACE " "

bool isPrime(int);

int main()
{
    string input;
    getline(cin, input);    
    int firstPair = stoi(input);

    getline(cin, input);
    int secondPair = stoi(input);

    getline(cin, input);
    int firstInterval = stoi(input);

    getline(cin, input);
    int secondInterval = stoi(input);

    string output = EMPTY;

    for (int i = firstPair; i <= firstPair + firstInterval; i++)
    {
        if (isPrime(i))
        {
            for (int j = secondPair; j <= secondPair + secondInterval; j++)
            {
                if (isPrime(j))
                {
                    output.append(to_string(i))
                          .append(to_string(j))
                          .append(NEW_LINE);
                }
            }
        }
    }

    cout << output;
}

bool isPrime(int n)
{
    if (n < 2)
    {
        return false;
    }
    else if (n == 2 || n == 3)
    {
        return true;
    }
    
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }

    return true;
}

//Напишете програма, която генерира и принтира на конзолата четирицифрени числа, в които първата и втората двойка цифри образуват двуцифрени прости числа (пример за такова число 1723). Крайната стойност до която трябва да се генерират двойките се определя от други 2 цифри, подадени като вход, които определят с колко крайната стойност е по-голяма от началната.
//Вход
//От конзолата се четат четири реда:
//•	На първия ред – началната стойност на първите първата двойка числа – цяло положително число в диапазона [10… 90]
//•	На втория ред – началната стойност на втората двойка числа – цяло положително число в диапазона [10… 90]
//•	На третия ред – разликата между началната и крайната стойност на  първата двойка числа – цяло положително число в диапазона [1… 9]
//•	На четвъртия ред – разликата между началната и крайната стойност на  втората двойка числа – цяло положително число в диапазона [1… 9]
//Изход:
//Да се отпечатат на конзолата четирицифрените числа, в които първите две и вторите две цифри са прости двуцифрени числа.