// 05 Godzilla vs Kong.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    const double DecorCost = .1;
    const double StatistsCost = 1 - .1;

    const int StatistCountrange = 150;

    double budget, priceClothsPesStatist;
    int statistsCount;
    cin >> budget >> statistsCount >> priceClothsPesStatist;

    double discont = 1.0;

    if (statistsCount > StatistCountrange)
    {
        discont = StatistsCost;
    }

    double tottalSum = budget * DecorCost + statistsCount * priceClothsPesStatist * discont;

    double diff = budget - tottalSum;

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);

    cout.precision(2);

    if (diff >= 0)
    {
        cout << "Action!" << endl << "Wingard starts filming with " << diff << " leva left." << endl;
    }
    else
    {
        cout << "Not enough money!" << endl << "Wingard needs " << (-1 * diff) << " leva more." << endl;
    }
}

//Снимките за дългоочаквания филм "Годзила срещу Конг" започват.Сценаристът Адам Уингард ви моли да напишете програма, която да изчисли дали предвидените средства са достатъчни за снимането на филма.За снимките  ще бъдат нужни определен брой статисти, облекло за всеки един статист и декор.
//Известно е, че:
//•	Декорът за филма е на стойност 10 % от бюджета.
//•	При повече от 150 статиста, има отстъпка за облеклото на стойност 10 % .
//Вход
//От конзолата се четат 3 реда :
//    Ред 1.	Бюджет за филма – реално число в интервала[1.00 … 1000000.00]
//    Ред 2.	Брой на статистите – цяло число в интервала[1 … 500]
//    Ред 3.	Цена за облекло на един статист – реално число в интервала[1.00 … 1000.00]
//    Изход
//    На конзолата трябва да се отпечатат два реда :
//•	Ако  парите за декора и дрехите са повече от бюджета :
//o	"Not enough money!"
//o	"Wingard needs {парите недостигащи за филма} leva more."
//•	Ако парите за декора и дрехите са по малко или равни на бюджета :
//o	"Action!"
//o	"Wingard starts filming with {останалите пари} leva left."
//Резултатът трябва да е форматиран до втория знак след десетичната запетая.