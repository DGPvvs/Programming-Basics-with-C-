// 04 Sequence 2kPlus1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

#define EMPTY ""
#define NEW_LINE "\r\n"

int OddNum(int k)
{
    return 2 * k + 1;
}

int main()
{
    int n;
    cin >> n;

    int k = 1;

    string output = EMPTY;

    while (k <= n)
    {
        output.append(to_string(k))
              .append(NEW_LINE);
        k = OddNum(k);
    }

    cout << output;
}

//Напишете програма, която чете число n, въведено от потребителя, и отпечатва всички числа ≤ n от редицата: 1, 3, 7, 15, 31, …. Всяко следващо число се изчислява като умножим предишното с 2 и добавим 1.