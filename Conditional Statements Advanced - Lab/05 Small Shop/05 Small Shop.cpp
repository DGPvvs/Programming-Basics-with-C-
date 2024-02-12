// 05 Small Shop.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    const string TownSofia = "Sofia";
    const string TownPlovdiv = "Plovdiv";

    const string ProductCoffee = "coffee";
    const string ProductWater = "water";
    const string ProductBeer = "beer";
    const string ProductSweets = "sweets";
    const string ProductPeanuts = "peanuts";

    const double SofiaCoffee = .5;
    const double SofiaWater = .8;
    const double SofiaBeer = 1.2;
    const double SofiaSweets = 1.45;
    const double SofiaPeanuts = 1.6;

    const double PlovdivCoffee = .4;
    const double PlovdivWater = .7;
    const double PlovdivBeer = 1.15;
    const double PlovdivSweets = 1.3;
    const double PlovdivPeanuts = 1.5;

    const double VarnaCoffee = .45;
    const double VarnaWater = .7;
    const double VarnaBeer = 1.1;
    const double VarnaSweets = 1.35;
    const double VarnaPeanuts = 1.55;

    string product, town;
    double count;
    cin >> product >> town >> count;

    double coffeePrice = VarnaCoffee;
    double waterPrice = VarnaWater;
    double beerPrice = VarnaBeer;
    double sweetsPrice = VarnaSweets;
    double peanutsPrice = VarnaPeanuts;

    if (town == TownSofia)
    {
        coffeePrice = SofiaCoffee;
        waterPrice = SofiaWater;
        beerPrice = SofiaBeer;
        sweetsPrice = SofiaSweets;
        peanutsPrice = SofiaPeanuts;
    }
    else if (town == TownPlovdiv)
    {
        coffeePrice = PlovdivCoffee;
        waterPrice = PlovdivWater;
        beerPrice = PlovdivBeer;
        sweetsPrice = PlovdivSweets;
        peanutsPrice = PlovdivPeanuts;
    }

    double price = 0;

    if (product == ProductCoffee)
    {
        price = coffeePrice;
    }
    else if (product == ProductWater)
    {
        price = waterPrice;
    }
    else if (product == ProductBeer)
    {
        price = beerPrice;
    }
    else if (product == ProductSweets)
    {
        price = sweetsPrice;
    }
    else
    {
        price = peanutsPrice;
    }

    double topttalCost = price * count;

    cout << topttalCost << endl;
}

//Предприемчив българин отваря квартални магазинчета в няколко града и продава на различни цени според града:
//град / продукт    coffee  water	beer	sweets	peanuts
//Sofia         	0.50	0.80	1.20	1.45	1.60
//Plovdiv	        0.40	0.70	1.15	1.30	1.50
//Varna	            0.45	0.70	1.10	1.35	1.55
//Напишете програма, която чете продукт (низ), град(низ) и количество(десетично число), въведени от потребителя, и пресмята и отпечатва колко струва съответното количество от избрания продукт в посочения град. 