// 07 Sum Numbers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    int num;
    cin >> num;

    int sum = 0;

    for (int i = 0; i < num; i++)
    {
        int input;
        cin >> input;

        sum += input;
    }

    cout << sum << endl;
}

//Да се напише програма, която чете n-на брой цели числа, въведени от потребителя и ги сумира.
//•	От първия ред на входа се въвежда броят числа n.
//•	От следващите n реда се въвежда по едно цяло число.
//Програмата трябва да прочете числата, да ги сумира и да отпечата сумата им. 