// 08 Basketball Equipment.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    //Задаване на стойностите на екипировката като константи
    const double ShoesRate = .6;
    const double TeamRate = .8;
    const double BallRate = 1.0 / 4.0;
    const double AccessoriesRate = 1.0 / 5.0;

    //Получаване на таксата за тренировка за година
    double costCoaching;
    cin >> costCoaching;

    //Изчисляване на стойността на елементите на екипировката
    double basketballShoesPrice = ShoesRate * costCoaching;
    double basketballTeamPrice = TeamRate * basketballShoesPrice;
    double basketballPrice = BallRate * basketballTeamPrice;
    double accessoriesPrice = AccessoriesRate * basketballPrice;

    //Изчисляване на сумата за цялата екипировка
    double tottalPrice = costCoaching + basketballShoesPrice + basketballTeamPrice + basketballPrice + accessoriesPrice;

    //Извеждане на резултата на конзолата
    cout << tottalPrice << endl;
}

//Джеси решава, че иска да се занимава с баскетбол, но за да тренира е нужна екипировка. Напишете програма, която изчислява какви разходи ще има Джеси, ако започне да тренира, като знаете колко е таксата за тренировки по баскетбол за период от 1 година. Нужна екипировка: 
//•	Баскетболни кецове – цената им е 40 % по - малка от таксата за една година
//•	Баскетболен екип – цената му е 20 % по - евтина от тази на кецовете
//•	Баскетболна топка – цената ѝ е 1 / 4 от цената на баскетболния екип
//•	Баскетболни аксесоари – цената им е 1 / 5 от цената на баскетболната топка
//Вход
//От конзолата се четe 1 ред:
//•	Годишната такса за тренировки по баскетбол – цяло число в интервала[0… 9999]
//Изход
//Да се отпечата на конзолата колко ще са разходите на Джеси, ако започне да спортува баскетбол.
