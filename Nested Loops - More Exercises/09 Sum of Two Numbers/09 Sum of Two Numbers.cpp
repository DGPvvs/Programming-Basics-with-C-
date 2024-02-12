// 09 Sum of Two Numbers.cpp : This file contains the 'main' function. Program execution begins and ends there.
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
    int startInterval = stoi(input);

    getline(cin, input);
    int endInterval = stoi(input);

    getline(cin, input);
    int magicNumber = stoi(input);

    int count = 0;
    int i = startInterval;
    int j = startInterval;

    bool isMagic = false;
    bool isExitI = false;
    bool isExitJ = false;

    string output = EMPTY;

    while (!isMagic && !isExitI)
    {
        isExitJ = false;
        j = startInterval;

        while (!isExitJ && !isMagic)
        {
            count++;

            if ((i + j) == magicNumber)
            {
                output.append("Combination N:")
                    .append(to_string(count))
                    .append(" (")
                    .append(to_string(i))
                    .append(" + ")
                    .append(to_string(j))
                    .append(" = ")
                    .append(to_string(magicNumber))
                    .append(")")
                    .append(NEW_LINE);

                isMagic = true;
            }

            j++;

            if (j > endInterval)
            {
                isExitJ = true;
            }
        }

        i++;

        if (i > endInterval)
        {
            isExitI = true;
        }
    }

    if (!isMagic)
    {
        output.append(to_string(count))
            .append(" combinations - neither equals ")
            .append(to_string(magicNumber))
            .append(NEW_LINE);
    }

    cout << output;

    return 0;
}

//Напишете програма която проверява всички възможни комбинации от двойка числа в интервала от две дадени числа.
//На изхода се отпечатва, коя поред е комбинацията чиито сбор от числата е равен на дадено магическо число.
//Ако няма нито една комбинация отговаряща на условието се печата съобщение, че не е намерено.
//Вход
//Входът се чете от конзолата и се състои от три реда:
//•	Първи ред – начало на интервала – цяло число в интервала [1...999]
//•	Втори ред – край на интервала – цяло число в интервала [по-голямо от първото число...1000]
//•	Трети ред – магическото число – цяло число в интервала [1...10000]
//Изход
//На конзолата трябва да се отпечата един ред, според резултата:
//•	Ако е намерена комбинация чиито сбор на числата е равен на магическото число
//o	"Combination N:{пореден номер} ({първото число} + {второ число} = {магическото число})"
//•	Ако не е намерена комбинация отговаряща на условието
//o	"{броят на всички комбинации} combinations - neither equals {магическото число}"
