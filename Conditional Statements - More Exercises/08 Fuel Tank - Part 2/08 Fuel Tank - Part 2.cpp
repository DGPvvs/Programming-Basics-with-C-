// 08 Fuel Tank - Part 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

string FormatDoubleNum(double, int);

int main()
{
    const string Gas = "Gas";
    const string Gasoline = "Gasoline";
    const string Diesel = "Diesel";
    const string Yes = "Yes";

    const double priceGasoline = 2.22;
    const double priceDiesel = 2.33;
    const double priceGas = 0.93;

    string fuelType;
    getline(cin, fuelType);

    string input;
    getline(cin, input);
    double fuelCount = stod(input);

    string isHaveCard;
    getline(cin, isHaveCard);

    double price = .0;

    bool isDiscont = isHaveCard == Yes;

    if (fuelType == Gas)
    {
        price = priceGas * fuelCount;
        if (isDiscont)
        {
            price -= .08 * fuelCount;
        }
    }
    else if (fuelType == Gasoline)
    {
        price = priceGasoline * fuelCount;
        if (isDiscont)
        {
            price -= .18 * fuelCount;
        }
    }
    else
    {
        price = priceDiesel * fuelCount;
        if (isDiscont)
        {
            price -= .12 * fuelCount;
        }
    }

    if (fuelCount > 25)
    {
        price *= (1.0 - .1);
    }
    else if (fuelCount >= 20)
    {
        price *= (1.0 - .08);
    }

    string output = string().append(FormatDoubleNum(price, 2))
                            .append(" lv.");

    cout << output << endl;
}

string FormatDoubleNum(double number, int precision)
{
    stringstream stream;

    stream.precision(precision);
    stream << fixed;

    stream << number;

    return stream.str();
}

//�������� ��������, ����� �� ���������, ����� �� ������ �� ���� ������ �� ������� ���������� �� ���������� ��, ���� ������ � ����� ��� ������ �������, ����� � ������ �� ����� ������ � ���� ��������� � ����� �� ��������. ������ �� �������� �� ����� ������: 
//�	������ � 2.22 ���� �� ���� �����,
//�	����� � 2.33 ���� �� ���� �����
//�	��� � 0.93 ���� �� �����
//��� ������ ��� ����� �� ��������, ��� �� ��������� �� �������� ��������� �� ����� ������: 18 ��.�� ����� ������, 12 ��. �� ����� ����� � 8 ��. �� ����� ���. 
//��� ������� � ������� ����� 20 � 25 ����� �����������, ��� �������� 8 �������� �������� �� �������� ����, ��� ������ �� 25 ����� ������, ��� �������� 10 �������� �������� �� �������� ����.
//����
//������ �� ���� �� ��������� � �� ������ �� 3 ����:
//�	���� �� �������� � ����� � �����������: "Gas", "Gasoline" ��� "Diesel"
//�	���������� ������ � ������ ����� � ��������� [1.00 � 50.00]
//�	���������� �� ������ ����� � ����� � �����������: "Yes" ��� "No"
//�����
//�� ��������� ������ �� �� �������� ���� ���.
//�	"{�������� ���� �� ��������} lv."
//������ �� �������� �� ���� ������������� �� ������� ����� ���� ���������� ����.