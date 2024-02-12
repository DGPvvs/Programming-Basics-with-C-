// 07 Safe Passwords Generator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

#define EMPTY ""

int main()
{
    const char MIN_A = (char)35;
    const char MAX_A = (char)55;
    const char MIN_B = (char)64;
    const char MAX_B = (char)96;

    string input;
    getline(cin, input);
    int a = stoi(input);

    getline(cin, input);
    int b = stoi(input);

    getline(cin, input);
    int maximumNumber = stoi(input);

    char charA = MIN_A;
    char charB = MIN_B;
    bool isExitNumber = false;
    bool isExitA = false;
    bool isExitB = false;
    int curentNumber = 1;
    int aCurent = 1;
    int bCurent = 1;

    string output = EMPTY;

    while (!isExitNumber && !isExitA && !isExitB)
    {
        while (!isExitNumber && !isExitA)
        {
            isExitB = false;
            bCurent = 1;

            while (!isExitNumber && !isExitB)
            {
                output.append(1, charA)
                    .append(1, charB)
                    .append(to_string(aCurent))
                    .append(to_string(bCurent))
                    .append(1, charB)
                    .append(1, charA)
                    .append("|");

                curentNumber++;

                if (curentNumber > maximumNumber)
                {
                    isExitNumber = true;
                }

                charA++;

                if (charA > MAX_A)
                {
                    charA = MIN_A;
                }

                charB++;

                if (charB > MAX_B)
                {
                    charB = MIN_B;
                }

                bCurent++;

                if (bCurent > b)
                {
                    isExitB = true;
                }
            }

            aCurent++;

            if (aCurent > a)
            {
                isExitA = true;
            }
        }
    }

    cout << output << endl;

    return 0;
}

//Ани се страхува от това, да не й бъде хакнат някой от профилите в социалните мрежи, затова решава да направи генератор за пароли, които да бъдат достатъчно сигурни.
//Вашата задача е да й помогнете да напише програма, която ще генерира тези пароли, разделени една от друга от знака "|".
//Да се напише програма, която генерира серия от символи като в шаблона:
//ABxyBA
//като при всяко генериране на нов код, стойностите на символите се увеличават с 1. Ако A надхвърли 55, се връща на 35. Ако B надхвърли 96, се връща на 64.
//Вход
//От конзолата се чете 1 ред:
//•	На първия ред a – цяло число в интервала [1 … 1000]
//•	На втория ред b – цяло число в интервала [1 … 1000]
//•	На третия ред максимален брой генерирани пароли – цяло число в интервала [1 … 1000000]
//Ограничения:
//•	A е символ с ASCII стойност в диапазона [35… 55]
//•	B е символ с ASCII стойност в диапазона [64 … 96]
//•	x e цяло число в диапазона [1… a] 
//•	y e цяло число в диапазона [1… b]
//Изход:
//Да се отпечата на конзолата:
//•	Генерираният код.Ако броят на комбинациите е по-голям от максималния на кода, да се отпечата до подадената стойност, в противен случай да се отпечата до текущия брой на комбинациите.