// 03 Even or Odd.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    int input;
    cin >> input;

    string output = input % 2 == 0 ? "even" : "odd";

    cout << output << endl;
}

//Да се напише програма, която чете цяло число, въведено от потребителя, и печата дали е четно или нечетно. 
//Ако е четно отпечатайте "even", ако е нечетно "odd".
