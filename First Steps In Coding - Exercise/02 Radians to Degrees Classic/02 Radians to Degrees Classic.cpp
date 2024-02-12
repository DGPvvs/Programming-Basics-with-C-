// 02 Radians to Degrees Classic.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#define _USE_MATH_DEFINES

#include <math.h>

using namespace std;

int main()
{
    const double pi = 3.141592653589793;
    const double piBelow180 = 180.0 / M_PI;

    double radians;
    cin >> radians;

    double degreas = radians * piBelow180;

    cout << round(degreas) << endl;
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

