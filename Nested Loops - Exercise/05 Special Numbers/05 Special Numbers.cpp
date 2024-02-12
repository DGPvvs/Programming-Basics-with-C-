// 05 Special Numbers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

#define EMPTY ""

int main()
{
    string input;
    getline(cin, input);
    int devider = stoi(input);

    string s = EMPTY;

    for (int i = 1111; i <= 9999; i++)
    {
        bool flag = true;
        int num = i;

        while (flag && num > 0)
        {
            int n = num % 10;

            if (n == 0 || devider % n != 0)
            {
                flag = false;
            }

            num /= 10;
        }

        if (flag)
        {
            s.append(to_string(i)).append(" ");
        }
    }

    s.erase(s.length() - 1, s.length());

    cout << s << endl;
}

//Да се напише програма, която чете едно цяло число N, въведено от потребителя, и генерира всички възможни "специални" числа от 1111 до 9999. За да бъде "специалнo" едно число, то трябва да отговаря на следното условие: 
//•	N да се дели на всяка една от неговите цифри без остатък.
//Пример: при N = 16, 2418 е специално число:
//•	16 / 2 = 8 без остатък
//•	16 / 4 = 4 без остатък
//•	16 / 1 = 16 без остатък
//•	16 / 8 = 2 без остатък
//Вход
//Входът се чете от конзолата и се състои от едно цяло число в интервала [1…600000]
//Изход
//На конзолата трябва да се отпечатат всички "специални" числа, разделени с интервал