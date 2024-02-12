// 09. Yard Greening.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

string to_string(double num, int format)
{
    int range = 1;

    for (int i = 0; i < format; i++)
    {
        range *= 10;
    }

    int x = num * range + .5;

    string numS = to_string(x);

    string s = "";
    int y = 1;
    for (int i = numS.length() - 1; i >= 0; i--)
    {
        s = numS[i] + s;
        if (y == format)
        {
            s = "." + s;
        }
        y++;
    }

    return s;
}

int main()
{
    const double OnePrice = 7.61;
    const double Discont = .18;

    double area;
    cin >> area;
    
    double pricePerArea = area * OnePrice;
    double discontPrice = pricePerArea * Discont;

    double tottalPrice = pricePerArea - discontPrice;

    cout << "The final price is: " << tottalPrice << " lv." << endl;
    cout << "The discount is: " << discontPrice << " lv." << endl;
}

//Божидара разполага с няколко къщи на Черноморието и желае да озелени дворовете на някои от тях, като по този начин създаде уютна обстановка и комфорт на гостите си. За целта е наела фирма.
//Напишете програма, която изчислява необходимате сума, които Божидара ще трябва да заплати на фирмата изпълнител на проекта. Цената на един кв. м. е 7.61 лв със ДДС. Понеже нейният двор е доста голям, фирмата изпълнител предлага 18% отстъпка от крайната цена.
//Вход
//От конзолата се прочита само един ред:
//1.	Кв. метри, които ще бъдат озеленени – реално число в интервала [0.00 … 10000.00]
//Изход
//На конзолата се отпечатват два реда:
//•	"The final price is: {крайна цена на услугата} lv."
//•	"The discount is: {отстъпка} lv."
