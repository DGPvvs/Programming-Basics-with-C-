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

//�������� ��������, ����� ���� �� ��������� ��� ������ ����� b1, b2 � h � �������� ������ �� ������ � ������ b1 � b2 � �������� h. ��������� �� ���� �� ������ � (b1 + b2) *h / 2.
//�� �������� ��-���� � ������� ������ ��� ������ 8 � 13 � �������� 7. ��� ��� ���� (8 + 13) *7 / 2 = 73.5.
//��������� ������ �� � ���������� �� ������� ����� ���� ���������� ����.