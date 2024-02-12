// 01 Trapeziod Area.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <sstream>

using namespace std;

string formatDoubleNum(double number, int precision)
{
    stringstream stream;

    stream.precision(precision);
    stream << fixed;

    stream << number;

    return stream.str();
}


double area(double b1, double b2, double h)
{
    return (b1 + b2) * h / 2.0;
} 

int main()
{
    string input;
    getline(cin, input);
    double b1 = stod(input);

    getline(cin, input);
    double b2 = stod(input);

    getline(cin, input);
    double h = stod(input);

    cout << formatDoubleNum(area(b1, b2, h), 2) << endl;
}

//Напишете програма, която чете от конзолата три дробни числа b1, b2 и h и пресмята лицето на трапец с основи b1 и b2 и височина h. Формулата за лице на трапец е (b1 + b2) *h / 2.
//На фигурата по-долу е показан трапец със страни 8 и 13 и височина 7. Той има лице (8 + 13) *7 / 2 = 73.5.
//Отговорът трябва да е форматиран до втората цифра след десетичния знак.