// 10 Diamond.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

#define NEW_LINE "\r\n"
#define ASTERISK '*'
#define DASH '-'

string setString(int, int, char);

int main()
{
    string input;
    getline(cin, input);
    int n = stoi(input);

    string output = string();

    if (n == 1)
    {
        output.append(setString(1, 1, ASTERISK));
    }
    else if (n == 2)
    {
        output.append(setString(1, 2, ASTERISK));
    }
    else
    {
        int midDiamond = 0;
        int count = n;
        int dash = (n - 1) / 2;

        if ((n % 2) == 0)
        {
            midDiamond = n / 2;
            count = n - 1;
        }
        else
        {
            midDiamond = n / 2 + 1;
        }

        for (int i = 1; i <= count; i++)
        {
            output.append(setString(1, dash, DASH))
                .append(setString(1, 1, ASTERISK));

            int mid = n - 2 * dash - 2;

            if (mid >= 0)
            {
                output.append(setString(1, mid, DASH))
                    .append(setString(1, 1, ASTERISK));
            }

            output.append(setString(1, dash, DASH))
                .append(NEW_LINE);

            if (i < midDiamond)
            {
                dash--;
            }
            else
            {
                dash++;
            }
        }
    }

    cout << output;

    return 0;
}

string setString(int start, int end, char simbol)
{
    string result = string();

    for (int i = start; i <= end; i++)
    {
        result.append(1, simbol);
    }

    return result;
}

//Напишете програма, която чете цяло число n (1 ≤ n ≤ 100), въведено от потребителя, и печата диамант с размер n като в примерите по-долу:
//Примерен вход и изход
//вход	изход		вход	изход		вход	изход		вход	изход		вход	изход
//1
//*
//2
//**
//3
//-*-
//*-*
//-*-
//4
//-**-
//*--*
//-**-
//5
//--*--
//-*-*-
//*---*
//-*-*-
//--*--
//6
//--**--
//-*--*-
//*----*
//-*--*-
//--**--
//7
//---*---
//--*-*--
//-*---*-
//*-----*
//-*---*-
//--*-*--
//---*---
//8
//---**---
//--*--*--
//-*----*-
//*------*
//-*----*-
//--*--*--
//---**---
//9
//----*----
//---*-*---
//--*---*--
//-*-----*-
//*-------*
//-*-----*-
//--*---*--
//---*-*---
//----*----
//Подсказки:
//•	Всички редове съдържат точно по n символа.
//•	Първият ред съдържа отляво и отдясно точно leftRight = (n - 1) / 2 тирета.
//•	Всеки следващ ред до средния съдържа отляво и отдясно с 1 тире по-малко от предходния.
//•	Всеки следващ ред след средния съдържа отляво и отдясно с 1 тире повече от предходния.
//•	Всеки ред съдържа в средата си (във вътрешността на диаманта) mid = n - 2 * leftRight - 2 тирета.
//•	Всеки ред съдържа 2 звездички, освен когато mid е отрицателно (тогава има само 1 звездичка).
//•	За всеки ред може да се изчислят и отпечатат неговите 5 съставни части:
//o leftRight тиренца отляво
//o	1 звездичка
//o	mid тиренца в средата (когато mid >= 0)
//o 1 звездичка(когато mid >= 0)
//o 1 звездичка
//o	leftRight тиренца отляво