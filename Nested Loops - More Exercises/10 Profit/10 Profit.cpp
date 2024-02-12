// 10 Profit.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

#define EMPTY ""
#define NEW_LINE "\r\n"

int main()
{
    const int One_Lv = 1;
    const int Two_Lv = 2;
    const int Five_Lv = 5;

    string input;
    getline(cin, input);
    int countOne = stoi(input);

    getline(cin, input);
    int countTwo = stoi(input);

    getline(cin, input);
    int countFive = stoi(input);

    getline(cin, input);
    int tottalSum = stoi(input);

    string output = EMPTY;

    for (int one = 0; one <= countOne; one++)
    {
        for (int two = 0; two <= countTwo; two++)
        {
            for (int five = 0; five <= countFive; five++)
            {
                bool isPosible = one * One_Lv + two * Two_Lv + five * Five_Lv == tottalSum;

                if (isPosible)
                {
                    output.append(to_string(one))
                        .append(" * 1 lv. + ")
                        .append(to_string(two))
                        .append(" * 2 lv. + ")
                        .append(to_string(five))
                        .append(" * 5 lv. = ")
                        .append(to_string(tottalSum))
                        .append(" lv.")
                        .append(NEW_LINE);
                }
            }
        }
    }

    cout << output;

    return 0;
}

//Имаме банкноти и монети по 1лв., по 2лв. и по 5лв. Да се напише програма, която прочита въведените от потребителя брой банкноти и монети и сума, и извежда на екран всички възможни начини по които сумата може да се изплати с наличните банкноти. 
//Вход
//Входът се чете от конзолата и съдържа точно 4 реда:
//1.Брой монети по 1лв. - цяло положително число;
//2.Брой монети по 2лв. - цяло положително число;
//3.Брой банкноти по 5лв. - цяло положително число;
//4.Сума - цяло положително число в интервала [1…1000] ;
//Изход
//Да се отпечатат на конзолата всички комбинации от дадените номинали, образуващи сумата, форматирани по следния начин:
//o "{бр. 1лв.} * 1 lv. + {бр. 2лв.} * 2 lv. + {бр. 5лв.} * 5 lv. = {сума} lv."