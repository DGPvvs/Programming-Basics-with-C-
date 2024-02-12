// 06 Number in Range.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    const int LoverBorder = -100;
    const int UpperBorder = 100;
    const int Zero = 0;

    const string Yes = "Yes";
    const string No = "No";

    int input;
    cin >> input;

    string output = (input >= LoverBorder && input <= UpperBorder && input != Zero)
        ? Yes
        : No;

    cout << output << endl;
}

//Да се напише програма, която проверява дали въведеното от потребителя число е в интервала[-100, 100] и е различно от 0 и извежда "Yes", ако отговаря на условията, или "No" ако е извън тях.