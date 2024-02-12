// 04 Even Powers of 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    long num = 1;

    int n;
    cin >> n;

    n = n / 2;

    for (int i = 0; i <= n; i++)
    {
        cout << num << endl;
        num = (num << 2);
    }
}

//Да се напише програма, която чете число n, въведено от потребителя, и печата четните степени на 2 ≤ 2n: 20, 22, 24, 26, …, 2n. 
//За това как се ползва оператора << (побитово изместване в ляво) - може да се прочете тук https://learn.microsoft.com/en-us/cpp/cpp/left-shift-and-right-shift-operators-input-and-output?view=msvc-170