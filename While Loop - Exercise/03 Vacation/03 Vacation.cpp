// 03 Vacation.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

#define EMPTY ""
#define NEW_LINE "\r\n"

int main()
{
    const string Save = "save";

    string input;
    getline(cin, input);
    double tourPrice = stod(input);

    getline(cin, input);
    double currentMoney = stod(input);

    bool isLoopExit = false;
    bool isSuccess = false;

    int day = 0;
    int spendDay = 0;

    while (!isLoopExit)
    {
        string action;
        getline(cin, action);

        getline(cin, input);
        double money = stod(input);
        day++;

        if (action == Save)
        {
            currentMoney += money;
            spendDay = 0;

            if (currentMoney >= tourPrice)
            {
                isLoopExit = true;
                isSuccess = true;
            }
        }
        else
        {
            currentMoney = max(.0, currentMoney - money);
            spendDay++;

            if (spendDay >= 5)
            {
                isLoopExit = true;
            }
        }
    }

    string output = EMPTY;

    if (isSuccess)
    {
        output.append("You saved the money for ")
              .append(to_string(day))
              .append(" days.");
    }
    else
    {
        output.append("You can't save the money.")
              .append(NEW_LINE)
              .append(to_string(day));
    }

    cout << output << endl;
}

//Джеси е решила да събира пари за екскурзия и иска от вас да ѝ помогнете да разбере дали ще успее да събере необходимата сума. Тя спестява или харчи част от парите си всеки ден. Ако иска да похарчи повече от наличните си пари, то тя ще похарчи колкото има и ще ѝ останат 0 лева.
//Вход
//От конзолата се четат:
//•	Пари нужни за екскурзията - реално число в интервала [1.00...25000.00]
//•	Налични пари - реално число в интервала [0.00...25000.00]
//След това многократно се четат по два реда:
//•	Вид действие – текст с възможности "spend" и "save"
//•	Сумата, която ще спести / похарчи - реално число в интервала [0.01… 25000.00]
//Изход
//Програмата трябва да приключи при следните случаи:
//•	Ако 5 последователни дни Джеси само харчи, на конзолата да се изпише:
//o "You can't save the money."
//o "{Общ брой изминали дни}"
//•	Ако Джеси събере парите за почивката на конзолата се изписва:
//o "You saved the money for {общ брой изминали дни} days."