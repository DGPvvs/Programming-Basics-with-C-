// 03 Sum Numbers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    int range;
    cin >> range;

    int sum = 0;

    while (range > sum)
    {
        int num;
        cin >> num;
        sum += num;
    }

    cout << sum << endl;
}

//Напишете програма, която чете цяло число от конзолата и на всеки следващ ред цели числа, докато тяхната сума стане по-голяма или равна на първоначалното число. След приключване да се отпечата сумата на въведените числа.