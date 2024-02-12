// 03 Numbers 1 To N with Step 3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    int num;
    cin >> num;

    for (int i = 1; i <= num; i += 3)
    {
        cout << i << endl;
    }
}

//Напишете програма, която чете число n, въведено от потребителя и отпечатва числата от 1 до n през 3.