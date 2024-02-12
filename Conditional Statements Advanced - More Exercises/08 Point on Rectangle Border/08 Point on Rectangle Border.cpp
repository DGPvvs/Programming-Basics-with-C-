// 08 Point on Rectangle Border.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string input;
    getline(cin, input);
    double x1 = stod(input);

    getline(cin, input);
    double y1 = stod(input);

    getline(cin, input);
    double x2 = stod(input);

    getline(cin, input);
    double y2 = stod(input);

    getline(cin, input);
    double x = stod(input);

    getline(cin, input);
    double y = stod(input);

    bool insideX = x1 <= x && x <= x2;
    bool insideY = y1 <= y && y <= y2;

    bool inX = (x1 == x || x2 == x) && insideY;
    bool inY = (y1 == y || y2 == y) && insideX;

    if (inX || inY)
    {
        cout << "Border" << endl;
    }
    else
    {
        cout << "Inside / Outside" << endl;
    }
}

//Напишете програма, която проверява дали точка {x, y} се намира върху някоя от страните на правоъгълник {x1, y1} – { x2, y2}. Входните данни се четат от конзолата и се състоят от 6 реда въведени от потребителя: десетичните числа x1, y1, x2, y2, x и y (като се гарантира, че x1 < x2 и y1 < y2). Да се отпечата "Border" (точката лежи на някоя от страните) или "Inside / Outside"(в противен случай).