// 01 USD to BGN.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
    const double CONVERT = 1.79549;

    double usd;
    cin >> usd;

    double bgn = usd * CONVERT;

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << bgn << endl;
}

//Напишете програма за конвертиране на щатски долари (USD) в български лева (BGN).
//Закръглете резултата до 2 цифри след десетичната запетая. Използвайте фиксиран курс между долар и лев: 1 USD = 1.79549 BGN.
