// 12 Trade Commissions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    string town;
    double sales;
    cin >> town >> sales;

    double less500 = 0;
    double less1000 = 0;
    double less10000 = 0;
    double more10000 = 0;

    double commissionary = 0;
    double rate = 0;

    bool isTownExist = true;
    bool isSellsPositive = sales >= 0;

    if (town == "Sofia")
    {
        less500 = 5.0 / 100;
        less1000 = 7.0 / 100;
        less10000 = 8.0 / 100;
        more10000 = 12.0 / 100;
    }
    else if (town == "Varna")
    {
        less500 = 4.5 / 100;
        less1000 = 7.5 / 100;
        less10000 = 10.0 / 100;
        more10000 = 13.0 / 100;
    }
    else if (town == "Plovdiv")
    {
        less500 = 5.5 / 100;
        less1000 = 8.0 / 100;
        less10000 = 12.0 / 100;
        more10000 = 14.5 / 100;
    }
    else
    {
        isTownExist = false;
    }

    if (sales <= 500)
    {
        rate = less500;
    }
    else if (sales <= 1000)
    {
        rate = less1000;
    }
    else if (sales <= 10000)
    {
        rate = less10000;
    }
    else
    {
        rate = more10000;
    }

    commissionary = sales * rate;

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    if (isTownExist && isSellsPositive)
    {
        cout << commissionary;
    }
    else
    {
        cout << "error";
    }

    cout << endl;
}

//Фирма дава следните комисионни на търговците си според града, в който работят и обема на продажбите :
//      Град	0 ≤ s ≤ 500 	500 < s ≤ 1 000	    1 000 < s ≤ 10 000	s > 10 000
//      Sofia	5 %             7 %                 8 %                 12 %
//      Varna	4.5 %           7.5 %               10 %                13 %
//      Plovdiv	5.5 %           8 %                 12 %                14.5 %
//    Напишете конзолна програма, която чете име на град(стринг) и обем на продажби(реално число), въведени от потребителя, и изчислява и извежда размера на търговската комисионна според горната таблица.Резултатът да се изведе форматиран до 2 цифри след десетичната точка.При невалиден град или обем на продажбите(отрицателно число) да се отпечата "error".