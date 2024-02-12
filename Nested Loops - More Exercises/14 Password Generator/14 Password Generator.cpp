// 14 Password Generator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
#include <string>

using namespace std;
#define EMPTY ""
#define SPACE " "

int main()
{
    const char Base_A = 'a';

    string input;
    getline(cin, input);
    int n = stoi(input);

    getline(cin, input);
    int l = stoi(input);

    string output = EMPTY;

    for (int digit1 = 1; digit1 <= n; digit1++)
    {
        for (int digit2 = 1; digit2 <= n; digit2++)
        {
            for (char symbol3 = Base_A; symbol3 <= Base_A - 1 + l; symbol3++)
            {
                for (char symbol4 = Base_A; symbol4 <= Base_A - 1 + l; symbol4++)
                {
                    for (int digit5 = max(digit1, digit2) + 1; digit5 <= n; digit5++)
                    {
                        output.append(to_string(digit1))
                            .append(to_string(digit2))
                            .append(1, symbol3)
                            .append(1, symbol4)
                            .append(to_string(digit5))
                            .append(SPACE);
                    }
                }
            }
        }
    }

    cout << output << endl;

    return 0;
}

//Да се напише програма, която чете две цели числа n и l, въведени от потребителя, и генерира по азбучен ред всички възможни  пароли, които се състоят от следните 5 символа:
//•	Символ 1: цифра от 1 до n.
//•	Символ 2: цифра от 1 до n.
//•	Символ 3: малка буква измежду първите l букви на латинската азбука.
//•	Символ 4: малка буква измежду първите l букви на латинската азбука.
//•	Символ 5: цифра от 1 до n, по-голяма от първите 2 цифри.
//Вход
//Входът се чете от конзолата и се състои от две цели числа n и l в интервала [1…9], по едно на ред.
//Изход
//На конзолата трябва да се отпечатат всички пароли по азбучен ред, разделени с интервал.