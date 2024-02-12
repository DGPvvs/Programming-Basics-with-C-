// 03 New House.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    const double RosesPrice = 5.0;
    const double DahliasPrice = 3.8;
    const double TulipsPrice = 2.8;
    const double NarcissusPrice = 3.0;
    const double GladiolusPrice = 2.5;

    const string Roses = "Roses";
    const string Dahlias = "Dahlias";
    const string Tulips = "Tulips";
    const string Narcissus = "Narcissus";
    const string Gladiolus = "Gladiolus";

    const double RosesDiscont = 1 - .1;
    const double DahliasDiscont = 1 - .15;
    const double TulipsDiscont = 1 - .15;
    const double NarcissusDiscont = 1.15;
    const double GladiolusDiscont = 1.2;

    const int MoreRosesCount = 80;
    const int MoreDahliasCount = 90;
    const int MoreTulipsCount = 80;
    const int LessNarcissusCount = 120;
    const int LessGladiolusCount = 80;

    string kindOfFlowers;
    int numberOfFlowers, budget;
    cin >> kindOfFlowers >> numberOfFlowers >> budget;

    double price = 0.0;
    double discont = 1.0;

    if (kindOfFlowers == Roses)
    {
        if (numberOfFlowers > MoreRosesCount)
        {
            discont = RosesDiscont;
        }

        price = RosesPrice;
    }
    else if (kindOfFlowers == Dahlias)
    {
        if (numberOfFlowers > MoreDahliasCount)
        {
            discont = DahliasDiscont;
        }

        price = DahliasPrice;
    }
    else if (kindOfFlowers == Tulips)
    {
        if (numberOfFlowers > MoreTulipsCount)
        {
            discont = TulipsDiscont;
        }

        price = TulipsPrice;
    }
    else if (kindOfFlowers == Narcissus)
    {
        if (numberOfFlowers < LessNarcissusCount)
        {
            discont = NarcissusDiscont;
        }

        price = NarcissusPrice;
    }
    else
    {
        if (numberOfFlowers < LessGladiolusCount)
        {
            discont = GladiolusDiscont;
        }

        price = GladiolusPrice;
    }

    price = price * numberOfFlowers * discont;

    double difference = budget * 1.0 - price;
    
    if (difference >= 0)
    {
        cout << "Hey, you have a great garden with " << numberOfFlowers;
        cout.setf(ios::fixed);
        cout.setf(ios::showpoint);
        cout.precision(2);

        cout << " " << kindOfFlowers << " and " << difference << " leva left." << endl;
    }
    else
    {
        cout.setf(ios::fixed);
        cout.setf(ios::showpoint);
        cout.precision(2);

        std::cout << "Not enough money, you need " << -difference << " leva more." << endl;
    }    
}

//Марин и Нели си купуват къща не далеч от София. Нели толкова много обича цветята, че Ви убеждава да напишете програма която да изчисли колко  ще им струва, да си засадят определен брой цветя и дали наличния бюджет ще им е достатъчен. Различните цветя са с различни цени. 
//цвете             	Роза	Далия	Лале	Нарцис	Гладиола
//Цена на брой в лева	5	    3.80	2.80	3	    2.50
//Съществуват следните отстъпки:
//•	Ако Нели купи повече от 80 Рози - 10% отстъпка от крайната цена
//•	Ако Нели купи повече от 90  Далии - 15% отстъпка от крайната цена
//•	Ако Нели купи повече от 80 Лалета - 15% отстъпка от крайната цена
//•	Ако Нели купи по-малко от 120 Нарциса - цената се оскъпява с 15%
//•	Ако Нели Купи по-малко от 80 Гладиоли - цената се оскъпява с 20%
//От конзолата се четат 3 реда:
//•	Вид цветя - текст с възможности - "Roses", "Dahlias", "Tulips", "Narcissus", "Gladiolus"
//•	Брой цветя - цяло число в интервала [10…1000]
//•	Бюджет - цяло число в интервала [50…2500]
//Да се отпечата на конзолата на един ред:
//•	Ако бюджета им е достатъчен - "Hey, you have a great garden with {броя цвета} {вид цветя} and {останалата сума} leva left."
//•	Ако бюджета им е НЕ достатъчен - "Not enough money, you need {нужната сума} leva more."
//Сумата да бъде форматирана до втория знак след десетичната запетая.