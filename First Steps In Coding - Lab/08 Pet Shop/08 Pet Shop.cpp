// 08 Pet Shop.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
    const double DOG_FOOD_PRICE = 2.5;
    const double CAT_FOOD_PRICE = 4;

    int dogFoodCount, catFoodCount;

    cin >> dogFoodCount;
    cin >> catFoodCount;

    double result = dogFoodCount * DOG_FOOD_PRICE + catFoodCount * CAT_FOOD_PRICE;

    cout << result <<  " lv." << endl;

    return 0;
}

//Напишете програма, която пресмята нужните разходи за закупуването на храна за кучета и котки.  Храната се пазарува от зоомагазин, като една опаковка храна за кучета е на цена 2.50 лв, а опаковка храна за котки струва 4 лв.
//Вход
//От конзолата се четат 2 реда:
//1.	Броят на опаковките храна за кучета – цяло число в интервала[0… 100]
//2.	Броят на опаковките храна за котки –  цяло число в интервала[0… 100]
//Изход
//На конзолата се отпечатва :
//"{крайната сума} lv."
