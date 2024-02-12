// 04 Toy Shop.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
    const double puzzlePrice = 2.60;
    const double talkingDollPrice = 3.0;
    const double teddyBearprice = 4.1;
    const double mignonprice = 8.2;
    const double truckprice = 2.0;
    const int orderForDiscont = 50;
    const double rentTax = .1;

    double excursionPrice;
    int puzzlesNums, talkingDollsNums, teddyBearsNum, minionsNum, trucksNum;

    cin >> excursionPrice >> puzzlesNums >> talkingDollsNums >> teddyBearsNum >> minionsNum >> trucksNum;

    double discont = 1.0;

    int tottalCount = puzzlesNums + talkingDollsNums + teddyBearsNum + minionsNum + trucksNum;

    if (tottalCount >= orderForDiscont)
    {
        discont -= .25;
    }

    double tottalPrice = puzzlesNums * puzzlePrice + talkingDollsNums * talkingDollPrice + teddyBearsNum * teddyBearprice + minionsNum * mignonprice + trucksNum * truckprice;

    tottalPrice *= discont;

    tottalPrice *= 1 - rentTax;

    double diff = tottalPrice - excursionPrice;

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);

    cout.precision(2);

    if (diff >= 0)
    {
        cout << "Yes! " << diff << " lv left." << endl;
    }
    else
    {
        cout << "Not enough money! " << (-1) * diff << " lv needed." << endl;
    }    
}

//Петя има магазин за детски играчки.Тя получава голяма поръчка, която трябва да изпълни.С парите, които ще спечели иска да отиде на екскурзия.
//Цени на играчките :
//•	Пъзел - 2.60 лв.
//•	Говореща кукла - 3 лв.
//•	Плюшено мече - 4.10 лв.
//•	Миньон - 8.20 лв.
//•	Камионче - 2 лв.
//Ако поръчаните играчки са 50 или повече магазинът прави отстъпка 25 % от общата цена.От спечелените пари Петя трябва да даде 10 % за наема на магазина.Да се пресметне дали парите ще ѝ стигнат да отиде на екскурзия.
//Вход
//От конзолата се четат 6 реда:
//1.	Цена на екскурзията - реално число в интервала[1.00 … 10000.00]
//2.	Брой пъзели - цяло число в интервала[0… 1000]
//3.	Брой говорещи кукли - цяло число в интервала[0 … 1000]
//4.	Брой плюшени мечета - цяло число в интервала[0 … 1000]
//5.	Брой миньони - цяло число в интервала[0 … 1000]
//6.	Брой камиончета - цяло число в интервала[0 … 1000]
//Изход
//На конзолата се отпечатва :
//•	Ако парите са достатъчни се отпечатва :
//o	"Yes! {оставащите пари} lv left."
//•	Ако парите НЕ са достатъчни се отпечатва :
//o	"Not enough money! {недостигащите пари} lv needed."
//
//Резултатът трябва да се форматира до втория знак след десетичната запетая.