// 02 Numbers N To 1 ver2.0.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    int num;
    cin >> num;

    for (int i = 0; i < num; i++)
    {
        cout << num - i << endl;
    }
}

//Напишете програма, която чете цяло положително число n, въведено от потребителя и печата числата от n до 1 в обратен ред.Въведеното число n, винаги ще бъде по - голямо от 1.