// 07 Hotel Room.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

bool contains(string s, string f)
{
    int idx = s.find(f);
    return idx > -1;
}

int main()
{
    const double PRICE_APART_MAY_OCTOBER = 65.0;
    const double PRICE_APART_JUNE_SEPTEMBER = 68.7;
    const double PRICE_APART_JULY_AUGUST = 77.0;
    const double PRICE_STUDIO_MAY_OCTOBER = 50.0;
    const double PRICE_STUDIO_JUNE_SEPTEMBER = 75.2;
    const double PRICE_STUDIO_JULY_AUGUST = 76.0;

    const double DISCONT_STUDIO_MORE_SEVEN = 1.0 - .05;
    const double DISCONT_STUDIO_MORE_FOURTEEN_MAY_OCTOBER = 1.0 - .3;
    const double DISCONT_STUDIO_MORE_FOURTEEN_JUNE_SEPTEMBER = 1.0 - .2;
    const double DISCONT_APARTMENT_MORE_FOURTEEN = 1.0 - .1;

    const int MORE_SEVEN_NIGHTS = 7;
    const int MORE_FOURTEEN_NIGHTS = 14;

    const string MAY_OCTOBER = "MayOctober";
    const string JUNE_SEPTEMBER = "JuneSeptember";

    string mounth;
    int nightsNum;
    cin >> mounth >> nightsNum;

    double priceStudio = 0.0;
    double priceApartment = 0.0;
    double discontStudio = 1.0;
    double discontApartment = 1.0;

    if (contains(MAY_OCTOBER, mounth))
    {
        priceStudio = PRICE_STUDIO_MAY_OCTOBER;
        priceApartment = PRICE_APART_MAY_OCTOBER;

        if (nightsNum > MORE_FOURTEEN_NIGHTS)
        {
            discontStudio = DISCONT_STUDIO_MORE_FOURTEEN_MAY_OCTOBER;
        }
        else if (nightsNum > MORE_SEVEN_NIGHTS)
        {
            discontStudio = DISCONT_STUDIO_MORE_SEVEN;
        }
    }
    else if (contains(JUNE_SEPTEMBER, mounth))
    {
        priceStudio = PRICE_STUDIO_JUNE_SEPTEMBER;
        priceApartment = PRICE_APART_JUNE_SEPTEMBER;

        if (nightsNum > MORE_FOURTEEN_NIGHTS)
        {
            discontStudio = DISCONT_STUDIO_MORE_FOURTEEN_JUNE_SEPTEMBER;
        }
    }
    else
    {
        priceStudio = PRICE_STUDIO_JULY_AUGUST;
        priceApartment = PRICE_APART_JULY_AUGUST;
    }

    if (nightsNum > MORE_FOURTEEN_NIGHTS)
    {
        discontApartment = DISCONT_APARTMENT_MORE_FOURTEEN;
    }

    double tottalPriceStudio = priceStudio * nightsNum * discontStudio;
    double tottalPriceApartment = priceApartment * nightsNum * discontApartment;

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    cout << "Apartment: "
         << tottalPriceApartment
         << " lv."
         << endl
         << "Studio: "
         << tottalPriceStudio
         << " lv."
         << endl;
}

//Хотел предлага 2 вида стаи: студио и апартамент. Напишете програма, която изчислява цената за целия престой за студио и апартамент. Цените зависят от месеца на престоя:
//Май и октомври	            Юни и септември	                Юли и август
//Студио – 50 лв./нощувка	    Студио – 75.20 лв./нощувка	    Студио – 76 лв./нощувка
//Апартамент – 65 лв./нощувка	Апартамент – 68.70 лв./нощувка	Апартамент – 77 лв./нощувка
//Предлагат се и следните отстъпки:
//•	За студио, при повече от 7 нощувки през май и октомври : 5% намаление.
//•	За студио, при повече от 14 нощувки през май и октомври : 30% намаление.
//•	За студио, при повече от 14 нощувки през юни и септември: 20% намаление.
//•	За апартамент, при повече от 14 нощувки, без значение от месеца : 10% намаление.
//Вход
//Входът се чете от конзолата и съдържа точно 2 реда, въведени от потребителя:
//•	На първия ред е месецът – May, June, July, August, September или October
//•	На втория ред е броят на нощувките – цяло число в интервала [0 ... 200]
//Изход
//Да се отпечатат на конзолата 2 реда:
//•	На първия ред: “Apartment: {цена за целият престой} lv.”
//•	На втория ред: “Studio: {цена за целият престой} lv.“
//Цената за целия престой форматирана с точност до два знака след десетичната запетая.
