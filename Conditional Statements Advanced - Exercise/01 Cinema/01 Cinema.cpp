// 01 Cinema.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    const string Premiere = "Premiere";
    const string Normal = "Normal";
    const string Discount = "Discount";

    const double PremierePrice = 12.0;
    const double NormalPrice = 7.5;
    const double DiscountPrice = 5.0;

    string projectionType;
    int row, col;
    cin >> projectionType >> row >> col;

    double income = row * col;

    if (projectionType == Premiere)
    {
        income *= PremierePrice;
    }
    else if (projectionType == Normal)
    {
        income *= NormalPrice;
    }
    else
    {
        income *= DiscountPrice;
    }

    std::cout.setf(ios::fixed);
    std::cout.setf(ios::showpoint);
    std::cout.precision(2);

    std::cout << income << " leva" << endl;
}

//В една кинозала столовете са наредени в правоъгълна форма в r реда и c колони.Има три вида прожекции с билети на различни цени :
//•	Premiere – премиерна прожекция, на цена 12.00 лева.
//•	Normal – стандартна прожекция, на цена 7.50 лева.
//•	Discount – прожекция за деца, ученици и студенти на намалена цена от 5.00 лева.
//Напишете програма, която чете тип прожекция(стринг), брой редове и брой колони в залата(цели числа), въведени от потребителя, и изчислява общите приходи от билети при пълна зала.Резултатът да се отпечата във формат като в примерите по - долу, с 2 знака след десетичната точка.