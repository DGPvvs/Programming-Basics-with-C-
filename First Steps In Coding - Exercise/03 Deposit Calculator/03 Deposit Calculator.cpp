// 03 Deposit Calculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    double deposit;
    int period;
    double persent;

    cin >> deposit >> period >> persent;

    double tottalSum = deposit + period * ((deposit * persent / 100.0) / 12.0);

    cout << tottalSum << endl;
}

//Напишете програма, която изчислява каква сума ще получите в края на депозитния период при определен лихвен процент. Използвайте следната формула: 
//сума = депозирана сума + срок на депозита * ((депозирана сума * годишен лихвен процент) / 12)
//Вход
//От конзолата се четат 3 реда:
//1.	Депозирана сума – реално число в интервала[100.00 … 10000.00]
//2.	Срок на депозита(в месеци) – цяло число в интервала[1…12]
//3.	Годишен лихвен процент – реално число в интервала[0.00 …100.00]
//Изход
//Да се отпечата на конзолата сумата в края на срока.

