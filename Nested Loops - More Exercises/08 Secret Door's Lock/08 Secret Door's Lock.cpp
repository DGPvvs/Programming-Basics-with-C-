// 08 Secret Door's Lock.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

#define EMPTY ""
#define NEW_LINE "\r\n"
#define SPACE " "

int main()
{
    string input;
    getline(cin, input);
    int hundreds = stoi(input);

    getline(cin, input);
    int dozens = stoi(input);

    getline(cin, input);
    int ones = stoi(input);

    string output = EMPTY;

    for (int firstNum = 1; firstNum <= hundreds; firstNum++)
    {
        if ((firstNum % 2) == 0)
        {
            for (int secondNum = 1; secondNum <= dozens; secondNum++)
            {
                bool isSimple = (secondNum == 2) || (secondNum == 3) || (secondNum == 5) || (secondNum == 7);

                if (isSimple)
                {
                    for (int thirdNum = 1; thirdNum <= ones; thirdNum++)
                    {
                        if ((thirdNum % 2) == 0)
                        {
                            output.append(to_string(firstNum))
                                .append(SPACE)
                                .append(to_string(secondNum))
                                .append(SPACE)
                                .append(to_string(thirdNum))
                                .append(NEW_LINE);
                        }
                    }
                }
            }
        }
    }

    cout << output;

    return 0;
}

//В града има тайна врата, за която всички знаят, но никой не е успявал да я отключи и да види какво има зад нея. За да бъде отключена трябва да се въведе трицифрен код.
//Напишете програма, която генерира комбинации спрямо въведени числа – предположения от потребителя.
//От конзолата се въвеждат три цифри. Тези цифри ще бъдат горната граница, до която ние искаме да получим всички трицифрени числа, на които всяка една цифра отговаря на следните условия:
//•	Цифрата на единиците и цифрата на стотиците трябва да бъде четна
//•	Цифрата на десетиците да бъде просто число в диапазона (2...7).
//Това ще са възможните комбинации според въведените предположения от потребителя, с които ще може евентуално да се отключи вратата.
//Вход
//От конзолата се четат 3 реда:
//•	Горната граница на стотиците - цяло число в диапазона (1-9)
//•	Горната граница на десетиците - цяло число в диапазона (1-9)
//•	Горната граница на единиците - цяло число в диапазона (1-9)
//Изход
//Да се отпечатат на конзолата всички трицифрени числа, за които всяка една част отговаря на условията по-горе.
