// 04 Car Number.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

#define EMPTY ""
#define SPACE " "

int main()
{
    string input;
    getline(cin, input);
    int stratInterval = stoi(input);

    getline(cin, input);
    int endInterval = stoi(input);

    string output = EMPTY;

    for (int firstPosition = stratInterval; firstPosition <= endInterval; firstPosition++)
    {
        for (int secondPosition = stratInterval; secondPosition <= endInterval; secondPosition++)
        {
            for (int thirdPosition = stratInterval; thirdPosition <= endInterval; thirdPosition++)
            {
                bool flag = (((secondPosition + thirdPosition) % 2) == 0);

                if (flag)
                {
                    for (int fourPosition = stratInterval; fourPosition <= endInterval; fourPosition++)
                    {
                        flag = (firstPosition > fourPosition);

                        if (flag)
                        {
                            flag = ((((firstPosition % 2) == 0) && ((fourPosition % 2) != 0)) || (((fourPosition % 2) == 0) && ((firstPosition % 2) != 0)));

                            if (flag)
                            {
                                output.append(to_string(firstPosition))
                                    .append(to_string(secondPosition))
                                    .append(to_string(thirdPosition))
                                    .append(to_string(fourPosition))
                                    .append(SPACE);
                            }
                        }
                    }
                }
            }
        }
    }

    output.erase(output.length() - 1, output.length());

    cout << output << endl;

    return 0;
}

//Поздравления, поради вашите задълбочени знания в сферата на програмирането МВР реши да наеме точно вас за създаването на новата им система за генериране на специални автомобилни номера.
//Всеки един специален автомобилен номер се състой от четири числа. Условията, които разграничават специалните от обикновените номера са следните: 
//•	Ако номерът започва с четна цифра, то той трябва да завършва на нечетна цифра и обратното – ако започва с нечетна, завършва на четна
//•	Първата цифра от номера е по-голяма от последната
//•	Сумата от втората и третата цифра трябва да е четно число
//Входа се състой от две числа - начало и край на интервал, между които трябва да се генерира всяко едно число от номера.
//Вход
//1.	Първи ред - едноцифрено число - началото на интервала – цяло число в интервала [1…9]
//2.Втори ред - едноцифрено число - края на интервала – цяло число в интервала [1…9]
//Изход
//На конзолата трябва да се отпечатат всички специални номера, разделени с интервал.
