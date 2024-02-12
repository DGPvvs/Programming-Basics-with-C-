// 01 USD to BGN.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

string to_string(double num, int format)
{
    int range = 1;

    for (int i = 0; i < format; i++)
    {
        range *= 10;
    }

    int x = num * range + .5;

    string numS = to_string(x);

    string s = "";
    int y = 1;
    for (int i = numS.length() - 1; i >= 0; i--)
    {
        s = numS[i] + s;
        if (y == format)
        {
            s = "." + s;
        }
        y++;
    }

    return s;
}

int main()
{
    const double CONVERT = 1.79549;

    double usd;
    cin >> usd;

    double bgn = usd * CONVERT;    

    cout << to_string(bgn, 2) << endl;
}

//Напишете програма за конвертиране на щатски долари (USD) в български лева (BGN).
//Закръглете резултата до 2 цифри след десетичната запетая. Използвайте фиксиран курс между долар и лев: 1 USD = 1.79549 BGN.
