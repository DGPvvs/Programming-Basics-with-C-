// 12 The song of the wheels.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

#define EMPTY ""
#define NEW_LINE "\r\n"
#define SPACE " "

bool IsControl(int, int, int, int, int);

int main()
{
    string input;
    getline(cin, input);
    int controlSum = stoi(input);

    string machNum = "No!";
    int count = 0;
    string output = EMPTY;

    for (int a = 1; a <= 9; a++)
    {
        for (int b = a + 1; b <= 9; b++)
        {
            for (int c = 1; c <= 9; c++)
            {
                for (int d = 1; d < c; d++)
                {
                    if (IsControl(a, b, c, d, controlSum))
                    {
                        count++;
                        output.append(to_string(a))
                              .append(to_string(b))
                              .append(to_string(c))
                              .append(to_string(d))
                              .append(SPACE);

                        if (count == 4)
                        {
                            machNum = EMPTY;
                            machNum.append("Password: ")
                                   .append(to_string(a))
                                   .append(to_string(b))
                                   .append(to_string(c))
                                   .append(to_string(d));
                        }
                    }
                }
            }
        }
    }

    output.append(NEW_LINE)
          .append(machNum);

    cout << output << endl;
}

bool IsControl(int a, int b, int c, int d, int control)
{
    return (a * b) + (c * d) == control;
}

//Прапраправнукът на Сали Яшар е получил наследство - сейф с парола - четири цифри. В него е заключена тайната на пеещите каруци. Той има автосервиз и се нуждае от реклама, затова е решил да направи такава каруца. Проблема е, че паролата е скрита в следната задача:
//„Парола ще получиш, ако знаеш  едно цяло число, контролна стойност  се нарича то,
//почива в интервала от 4 до 144 включително, но да го откриеш може би ще е мъчително. ”
//Паролата има формат: "abcd" и контролната стойност трябва да е равна на  a*b + c*d , но трябва да бъдат спазени следните условия: 
//•	при намирането на а и b: a < b
//•	при намиране на  c и d: c > d
//•	a, b, c и d са числа в интервала [1 - 9]
//Каруцата има четири колела, затова паролата ще е четвърто число, което трябва да се отпечата.
//В случай, че НЕ се намери такова число, отпечатва се „No!“.
//Вход
//От конзолата се чете едно цяло число (контролната стойност): M – цяло число в интервала [4 … 144] ;
//Изход
//Отпечатването на конзолата зависи от резултата:
//•	Ако са намерени четворки числа (аbcd), отговарящи на условието, ги отпечатваме всичките с разделител интервал: “{а}{b}{c}{d} ”
//•	Отпечатва се един от двата реда на нов ред:
//•	Ако съществува четвърта четворка се отпечатва: „Password: {а}{b}{c}{d}“
//•	Ако НЕ са намерени такива числа или няма  четвърта четворка отпечатваме: “No!”