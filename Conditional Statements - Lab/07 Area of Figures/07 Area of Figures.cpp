// 07 Area of Figures.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#define _USE_MATH_DEFINES

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    const string Square = "square";
    const string Rectangle = "rectangle";
    const string Circle = "circle";
    const string Triangle = "triangle";

    double area = 0.0;

    string input;
    cin >> input;

    if (input == Square)
    {
        double a;
        cin >> a;
        area = a * a;
    }
    else if (input == Rectangle)
    {
        double a, b;
        cin >> a >> b;

        area = a * b;
    }
    else if (input == Circle)
    {
        double radius;
        cin >> radius;

        area = M_PI * radius * radius;
    }
    else 
    {
        double a, h;
        cin >> a >> h;

        area = a * h / 2.0;
    }

    cout.setf(ios::fixed);
    cout.precision(3);
    cout << area << endl;
}

//Да се напише програма, в която потребителят въвежда вида и размерите на геометрична фигура и пресмята лицето й.Фигурите са четири вида : квадрат(square), правоъгълник(rectangle), кръг(circle) и триъгълник(triangle).На първия ред на входа се чете вида на фигурата(текст със следните възможности : square, rectangle, circle или triangle).
//•	Ако фигурата е квадрат(square) : на следващия ред се чете едно дробно число - дължина на страната му
//•	Ако фигурата е правоъгълник(rectangle) : на следващите два реда четат две дробни числа - дължините на страните му
//•	Ако фигурата е кръг(circle) : на следващия ред чете едно дробно число - радиусът на кръга
//•	Ако фигурата е триъгълник(triangle) : на следващите два реда четат две дробни числа - дължината на страната му и дължината на височината към нея
//Резултатът да се закръгли до 3 цифри след десетичната запетая.