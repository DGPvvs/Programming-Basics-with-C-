﻿// 03 03 HistogramAdvance.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <sstream>
#include <cmath>

using namespace std;

#define EMPTY ""
#define NEW_LINE "\r\n"

string formatDoubleNum(double number, int precision)
{
    stringstream stream;

    stream.precision(precision);
    stream << fixed;

    stream << number;

    return stream.str();
}

int main()
{
    int arr[] = { 0, 0, 0, 0, 0 };

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;

        int index = min(num / 200, 4);

        arr[index]++;
    }

    string output = EMPTY;

    for (int i = 0; i < 5; i++)
    {
        output.append(formatDoubleNum((100.0 * arr[i] / n), 2))
            .append("%")
            .append(NEW_LINE);
    }

    cout << output;
}

//Дадени са n цели числа в интервала [1…1000]. От тях някакъв процент p1 са под 200, друг процент p2 са от 200 до 399, друг процент p3 са от 400 до 599, друг процент p4 са от 600 до 799 и останалите p5 процента са от 800 нагоре. Да се напише програма, която изчислява и отпечатва процентите p1, p2, p3, p4 и p5.
//Пример: имаме n = 20 числа: 53, 7, 56, 180, 450, 920, 12, 7, 150, 250, 680, 2, 600, 200, 800, 799, 199, 46, 128, 65.Получаваме следното разпределение и визуализация:
//Диапазон      Числа в диапазона	                                Брой числа	    Процент
//< 200         53, 7, 56, 180, 12, 7, 150, 2, 199, 46, 128, 65	    12	            p1 = 12 / 20 * 100 = 60.00%
//200 … 399	    250, 200	                                        2	            p2 = 2 / 20 * 100 = 10.00%
//400 … 599	    450	                                                1	            p3 = 1 / 20 * 100 = 5.00%
//600 … 799	    680, 600, 799	                                    3	            p4 = 3 / 20 * 100 = 15.00%
//≥ 800	        920, 800	                                        2	            p5 = 2 / 20 * 100 = 10.00%
//Вход
//На първия ред от входа стои цялото число n (1 ≤ n ≤ 1000) – брой числа.На следващите n реда стои по едно цяло число в интервала [1…1000] – числата върху които да бъде изчислена хистограмата.
//Изход
//Да се отпечата на конзолата хистограмата – 5 реда, всеки от които съдържа число между 0% и 100%, с точност две цифри след десетичната точка, например 25.00%, 66.67%, 57.14%.