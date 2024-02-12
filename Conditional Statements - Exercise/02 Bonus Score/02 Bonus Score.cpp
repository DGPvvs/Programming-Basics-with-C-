// 02 Bonus Score.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>

using namespace std;

int main()
{
    const int Less101 = 101;
    const int Great1000 = 1000;
    const int BonussLess101 = 5;
    const int Ends5 = 2;
    const double BonusGreat1000 = .1;
    const double BonusBetween100And1000 = .2;

    int num;
    cin >> num;

    double bonus = .0;

    if (num < Less101)
    {
        bonus = BonussLess101;
    }
    else if (num > Great1000)
    {
        bonus = num * BonusGreat1000;
    }
    else
    {
        bonus = num * BonusBetween100And1000;
    }

    bonus += 1 - (num % 2);

    if (num % 10 == 5)
    {
        bonus += Ends5;
    }

    cout << bonus << endl;
    cout << num + bonus << endl;
}

//Дадено е цяло число – начален брой точки.Върху него се начисляват бонус точки по правилата, описани по - долу.Да се напише програма, която пресмята бонус точките, които получава числото и общия брой точки(числото + бонуса).
//•	Ако числото е до 100 включително, бонус точките са 5.
//•	Ако числото е по - голямо от 100, бонус точките са 20 % от числото.
//•	Ако числото е по - голямо от 1000, бонус точките са 10 % от числото.
//
//•	Допълнителни бонус точки(начисляват се отделно от предходните) :
//    o	За четно число -> + 1 т.
//    o	За число, което завършва на 5 -> + 2 т.