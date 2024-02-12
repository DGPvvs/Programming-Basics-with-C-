// 07 Shopping.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    const double GraphicsPrice = 250;
    const double ProcesorCost = .35;
    const double RAMsCost = .1;
    const double ExtraDiscont = .15;

    double budget;
    int graphicsCard, procesors, rams;
    cin >> budget >> graphicsCard >> procesors >> rams;

    double buyedGraphics = GraphicsPrice * graphicsCard;
    double procesorsPirce = buyedGraphics * ProcesorCost;
    double ramsPirce = buyedGraphics * RAMsCost;
    double fullCost = buyedGraphics + procesors * procesorsPirce + rams * ramsPirce;

    if (graphicsCard > procesors)
    {
        fullCost -= fullCost * ExtraDiscont;
    }

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);

    cout.precision(2);

    if (budget >= fullCost)
    {
        double leftMoney = budget - fullCost;
        cout << "You have " << leftMoney << " leva left!" << endl;
    }
    else if (fullCost > budget)
    {
        double neededMoney = fullCost - budget;
        cout << "Not enough money! You need " << neededMoney << " leva more!" << endl;
    }    
}

//Петър иска да купи N видеокарти, M процесора и P на брой рам памет.Ако броя на видеокартите е по - голям от този на процесорите получава 15 % отстъпка от крайната сметка.Важат следните цени :
//•	Видеокарта – 250 лв. / бр.
//•	Процесор – 35 % от цената на закупените видеокарти / бр.
//•	Рам памет – 10 % от цената на закупените видеокарти / бр.
//Да се изчисли нужната сума за закупуване на материалите и да се пресметне дали бюджета ще му стигне.
//Вход
//Входът се състои от четири реда :
//1.	Бюджетът на Петър - реално число в интервала[0.0…100000.0]
//2.	Броят видеокарти - цяло число в интервала[0…100]
//3.	Броят процесори - цяло число в интервала[0…100]
//4.	Броят рам памет - цяло число в интервала[0…100]
//Изход
//На конзолата се отпечатва 1 ред, който трябва да изглежда по следния начин :
//•	Ако бюджета е достатъчен :
//"You have {остатъчен бюджет} leva left!"
//•	Ако сумата надхвърля бюджета :
//"Not enough money! You need {нужна сума} leva more!"
//Резултатът да се форматира до втория знак след десетичната запетая.