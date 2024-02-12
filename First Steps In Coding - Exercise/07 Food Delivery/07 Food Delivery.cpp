// 07 Food Delivery.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    const double ChickenMenuPrice = 10.35;
    const double FishMenuPrice = 12.40;
    const double VegetarianMenuPrice = 8.15;
    const double DeliveryPrice = 2.5;
    const double DessertsPrice = .2;

    int chickenMenuCount, fishMenuCount, vegetarianMenuCount;
    cin >> chickenMenuCount >> fishMenuCount >> vegetarianMenuCount;

    double totalChickenMenuPrice = ChickenMenuPrice * chickenMenuCount;
    double totalFishMenuPrice = FishMenuPrice * fishMenuCount;
    double totalVegetarianMenuPrice = VegetarianMenuPrice * vegetarianMenuCount;

    double tottalPrice = totalChickenMenuPrice + totalFishMenuPrice + totalVegetarianMenuPrice;

    double dessertPrice = DessertsPrice * tottalPrice;

    double orderPrice = tottalPrice + dessertPrice + DeliveryPrice;

    cout <<orderPrice << endl;
}

//–есторант отвар€ врати и предлага н€колко менюта на преференциални цени: 
//Х	ѕилешко меню Ц  10.35 лв. 
//Х	ћеню с риба Ц 12.40 лв. 
//Х	¬егетарианско меню  Ц 8.15 лв. 
//Ќапишете програма, ко€то изчисл€ва колко ще струва на група хора да си поръчат храна за вкъщи.
//√рупата ще си поръча и десерт, чи€то цена е равна на 20% от общата сметка (без доставката). 
//÷ената на доставка е 2.50 лв и се начисл€ва най-накра€.  
//¬ход
//ќт конзолата се четат 3 реда:
//Х	Ѕрой пилешки менюта Ц ц€ло число в интервала [0 Е 99]
//Х	Ѕрой менюта с риба Ц ц€ло число в интервала [0 Е 99]
//Х	Ѕрой вегетариански менюта Ц ц€ло число в интервала [0 Е 99]
//»зход
//ƒа се отпечата на конзолата един ред:  "{цена на поръчката}"
