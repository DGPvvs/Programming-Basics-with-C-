// 02 Radians to Degrees.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>
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
    const double pi = 3.141592653589793;
    const double piBelow180 = 180.0 / pi;

    double radians;
    cin >> radians;

    double degreas = radians * piBelow180;

    cout << to_string(degreas, 0) << endl;
}

/// namespace _02_Radians_to_Degrees
//{
//    using static System.Console;
//    using static System.Math;
//
//    public class RadiansToDegrees
//    {
//        static void Main(string[] args)
//        {
//            
//
//            WriteLine(double.Parse(ReadLine()) * piBelow180);
//        }
//    }
//}

//Напишете програма, която чете ъгъл в радиани (rad) и го преобразува в градуси (deg). Използвайте формулата: градус = радиан * 180 / π.Числото π е 3.14. Закръглете резултата до най-близкото цяло число използвайки round() функцията от библиотеката math.h.
