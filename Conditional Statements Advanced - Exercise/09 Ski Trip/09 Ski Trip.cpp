// 09 Ski Trip.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<sstream>
#include <string>

using namespace std;

#define EMPTY "";

int main()
{
    const string Room_For_One_Person = "room for one person";
    const string Apartment = "apartment";

    const string Ratting = "positive";

    string home = EMPTY;
    string ratting = EMPTY;
    int dayToStay;

    getline(cin, home);
    dayToStay = stoi(home);
    getline(cin ,home);
    cin >> ratting;

    int nightCount = dayToStay - 1;
    double priceForOneNight = 0.0;
    double discont = 1.0;

    if (home == Room_For_One_Person)
    {
        priceForOneNight = 18.0;
    }
    else if (home == Apartment)
    {
        priceForOneNight = 25.0;

        if (nightCount < 10)
        {
            discont = .7;
        }
        else if (nightCount <= 15)
        {
            discont = .65;
        }
        else
        {
            discont = .5;
        }
    }
    else
    {
        priceForOneNight = 35.0;

        if (nightCount < 10)
        {
            discont = .9;
        }
        else if (nightCount <= 15)
        {
            discont = .85;
        }
        else
        {
            discont = .8;
        }
    }

    double tottalPrice = priceForOneNight * nightCount * discont;

    if (ratting == Ratting)
    {
        tottalPrice *= 1.25;
    }
    else
    {
        tottalPrice *= .9;
    }

    stringstream stream;
    // Set precision level to 2
    stream.precision(2);
    stream << fixed;

    // Convert double to string
    stream << tottalPrice;
    string str = stream.str();
        
    cout << str << endl;
}

//Атанас решава да прекара отпуската си в Банско и да кара ски. Преди да отиде обаче, трябва да резервира хотел и да изчисли колко ще му струва престоя. Налични са следните видове помещения, със следните цени за престой:
//	"room for one person" – 18.00 лв за нощувка
//	"apartment" – 25.00 лв за нощувка 
//	"president apartment" – 35.00 лв за нощувка
//Според броят на дните, в които ще остане в хотела (пример: 11 дни = 10 нощувки) и видът на помещението, което ще избере, той може да ползва различно намаление. 
//Намаленията са както следва:
//вид помещение             по-малко от 10 дни	    между 10 и 15 дни       повече от 15 дни
//room for one person       не ползва намаление     не ползва намаление     не ползва намаление
//apartment                 30% от крайната цена	35% от крайната цена	50% от крайната цена
//president apartment       10% от крайната цена	15% от крайната цена	20% от крайната цена
//След престоя, оценката на Атанас за услугите на хотела може да е позитивна (positive) или негативна(negative) . Ако оценката му е позитивна, към цената с вече приспаднатото намаление Атанас добавя 25% от нея. Ако оценката му е негативна приспада от цената 10%.
//Вход
//Входът се чете от конзолата и се състои от три реда:
//•	Първи ред - дни за престой - цяло число в интервала [0...365]
//•	Втори ред - вид помещение - "room for one person", "apartment" или "president apartment"
//•	Трети ред - оценка - "positive"  или "negative"
//Изход
//На конзолата трябва да се отпечата един ред:
//•	Цената за престоят му в хотела, форматирана до втория знак след десетичната запетая.